#include <iostream>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main() 
{
	int a[] = {1,2,3,4,5,6};
	for ( int *it = begin(a); it != end(a); ++it)
		cout << *it << endl;
	return 0;
}
