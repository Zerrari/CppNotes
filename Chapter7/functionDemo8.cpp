#include <iostream>

using std::cin;
using std::cout;

void count()
{
    static int nums = 0;
    nums++;
    cout << nums << '\n';
    return; 
}

int main()
{
    for (int i = 0;i < 5;i++)
    {
	count();
    }
    return 0;
}
