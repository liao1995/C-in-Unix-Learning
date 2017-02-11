#include <iostream>
int main()
{
	int sum = 0, val;
	while (std::cin >> val)
		sum += val;
	std::cout << "The sum is " << sum << std::endl;
	return 0;
}
