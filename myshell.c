#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024

int main()
{
	pid_t pid;
	int status;
	char cmd[MAXLINE];
	
	printf("%% ");
	while (fgets(cmd, MAXLINE, stdin)){
		if (cmd[strlen(cmd) - 1] == '\n')
			cmd[strlen(cmd) - 1] = '\0';
		if ((pid = fork()) > 0)	/* parent */
			waitpid(-1, &status, 0);
		else if (!pid)	/* child */
			execlp(cmd, cmd, (char *)0);
		else{
			perror("fork");
			exit(1);
		}
		printf("%% ");
	} 
	return 0;
}
