#include <iostream>
int main()
{
	int left, right;
	std::cout << "Enter two integers:" << std::endl;
	std::cin >> left >> right;
	if (left > right)
	{
		left = left ^ right;
		right = left ^ right;
		left = left ^ right;
	}
	for (int i = left; i <= right; ++i)
		std::cout << i << std::endl;
	return 0;
}
