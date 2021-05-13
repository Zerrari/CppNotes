#include <iostream>

using std::cin;
using std::cout;

inline void test()
{
    cout << "Error" << '\n';
    return; 
}

int main()
{
    test();
    return 0;
}
