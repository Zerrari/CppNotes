#include <iostream>

using std::cin;
using std::cout;

void fun1(int *p)
{
    int x = 10;
    p = &x;
    cout << p << '\n';
    return;
}

int main()
{
    int x = 10;
    int *p = &x;
    cout << p << '\n';
    fun1(p);
    cout << p << '\n';
    return 0;
}
