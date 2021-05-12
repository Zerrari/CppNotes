#include <iostream>

using std::cin;
using std::cout;

void fun1(const int *p)
{
    *p = 20;
    cout << *p << '\n';
    return;
}

int main()
{
    int x = 10;
    int *p = &x;
    fun1(p);
    return 0;
}
