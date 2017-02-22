#include <iostream>

using namespace std;

constexpr int direction(char dir)
{
    return dir == 'U' ? 0 : -1;
}

int main()
{
    cout << direction('D') << endl;
    return 0;
}
