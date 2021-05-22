#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int a[5] = {1,2,3,4,5};
	int *res = find(a,a+6,3);
	cout << *res << endl;
	return 0;
}
