#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;

int &test(int &val)
{
    int y = val;
    return y;
}

int main()
{
    int num = 10;
    cout << test(10);
    return 0;
}
