#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::initializer_list;


void error_handle(initializer_list<string> msg)
{
    for (auto it = msg.begin(); it != msg.end(); ++it)
        cout << *it << endl;
}

void more_params(int errcode, initializer_list<string> msg)
{
    cout << "code: " << errcode << endl;
    for (const auto &e : msg)
        cout << e << endl;
}


int main()
{

    error_handle({"Hello", "world", "every", "body"});
    cout << "--------" << endl;
    more_params(404, {"come", "on", "LI", "AO"});
    return 0;
}

