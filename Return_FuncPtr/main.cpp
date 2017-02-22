#include <iostream>
#include <vector>

using namespace std;

void up() { cout << "UP" << endl; }
void down() { cout << "Down" << endl; }
void left() { cout << "Left" << endl; }
void right() { cout << "Right" << endl; }

void (*func(const int dir))()
{
    switch(dir)
    {
    case 0: return up;
    case 1: return down;
    case 2: return left;
    case 3: return right;
    }
    return 0;
}

// 等价写法
decltype(up) *func2(const int dir)
{
    return func(dir);
}

// 等价写法2
auto func3(const int dir) -> void (*)()
{
    return func2(dir);
}

int main()
{
    func(3)();
    func2(2)();
    func3(1)();

    cout << "--------" << endl;

    vector<void(*)()> v = {up, down, left, right};
    for (auto e : v) e();
    return 0;
}
