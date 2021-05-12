#include <iostream>

using std::cin;
using std::cout;

void fun(int (&arr)[10])
{
    for (int i = 0;i < 10;i++)
    {
	cout << arr[i] << '\n';
    }
    return;
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    fun(a);
    return 0;
}
