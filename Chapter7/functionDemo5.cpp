#include <iostream>

using std::cin;
using std::cout;

void fun(int arr[][5],int rowsize)
{
    for (int i = 0;i < rowsize;i++)
    {
	for (int j = 0;j < 5;j++)
	{
	    cout << arr[i][j] << '\n';
	}
    }
    return;
}

void fun2(int (*arr)[5],int rowsize)
{
    for (int i = 0;i < rowsize;i++)
    {
	for (int j = 0;j < 5;j++)
	{
	    cout << arr[i][j] << '\n';
	}
    }
    return;
}

int main()
{
    int a[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};
    fun(a,2);
    fun2(a,2);
    return 0;
}
