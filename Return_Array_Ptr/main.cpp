#include <iostream>

using namespace std;

string (*get_arr())[10]
{
    static string str[10] = {"1","2","3"};
    return &str;
}

auto get_arr_2() -> string(*)[10]
{
    static string str2[10] = {"2","3","4"};
    return &str2;
}

int main()
{
    string (*ptr)[10] = get_arr_2();
    for (auto s : *ptr) cout << s << endl;
    cout << "Hello world!" << endl;
    return 0;
}
