#include <iostream>

using std::cin;
using std::cout;

void fun1(int &p)
{
    p = 20;
    return;
}

int main()
{
    int x = 10;
    cout << x << '\n';
    fun1(x);
    cout << x << '\n';
    return 0;
}
