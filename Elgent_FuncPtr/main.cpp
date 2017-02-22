#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

double add(const double a, const double b) { return a + b; }
double subtract(const double a, const double b) { return a - b; }
double multiply(const double a, const double b) { return a * b; }
double divide(const double a, const double b) { return a / b; }

int main()
{
    vector<decltype(add) *> v = {add, subtract, multiply, divide};
    for (auto op : v) cout << op(3, 4) << endl;
    return 0;
}

