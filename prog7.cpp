#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
	vector<string> v;
	string s;
	while (cin >> s)
		v.push_back(s);
	for (auto s : v)
		cout << s << endl;
	return 0;
}
