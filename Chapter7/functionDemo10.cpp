#include <iostream>

using std::cin;
using std::cout;

int count(int x,int y)
{
    int res = x+y;
    cout << res << '\n';
    return 0;
}


int count(int x)
{
    int res = x;
    cout << res << '\n';
    return 0;
}

int main()
{
    int x = 5,y = 5;
    count(x,y);
    count(x);
    return 0;
}

