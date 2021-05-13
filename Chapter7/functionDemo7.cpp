#include <iostream>

using std::cin;
using std::cout;

int test(int x,int y = 10)
{
    x = 0;
    cout << x << '\n';
    cout << y << '\n';
    return 0;
}

int main()
{
    test(20);
    return 0; 
}
