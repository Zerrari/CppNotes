#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ivec(10);
	vector<int> ilist;
	int i = 0;
	vector<int>::iterator iter = ivec.begin();
	while (iter != ivec.end())
	{
		*iter++ = i++;
	}
	copy(ivec.begin(),ivec.end(),back_inserter(ilist));
	vector<int>::iterator iter1 = ilist.begin();
	while (iter1 != ilist.end())
	{
		cout << *iter1++ << endl;
	}
	return 0;
}
