#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec(10,1);
	replace(ivec.begin(),ivec.end()-1,1,3);
	vector<int>::iterator iter = ivec.begin();
	while (iter != ivec.end())
	{
		cout << *iter++ << endl;
	}
	return 0;
}
