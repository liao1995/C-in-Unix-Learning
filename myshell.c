#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

#define MAXLINE 1024

static void sigint_handle(int);

int main()
{
	pid_t pid;
	int status;
	char cmd[MAXLINE];

	if (signal(SIGINT, sigint_handle) == SIG_ERR){
		perror("signal");
		exit(1);
	}	

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

void sigint_handle(int signo){
	printf("interrupt\n%%");
	fflush(stdout);
}
