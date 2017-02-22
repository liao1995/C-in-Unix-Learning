#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
	vector<int> v{1,2,3,4,5,6,7,8,9,10};
	auto begin = v.cbegin();
	auto end = v.cend();
	auto size = v.size();
	for (int i = 0; i < size / 2; ++i)
		cout << *(begin + i) + *(end - 1 - i) << endl;
	return 0;
}
