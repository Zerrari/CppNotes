#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec(10,0);
	vector<int>::iterator iter = ivec.begin();
	int x = 20;
	while (iter != ivec.end())
	{
		*iter++ = x;
		*iter++ = x--;
	}
	iter = ivec.begin();
	while (iter != ivec.end())
	{
		cout << *iter++ << ' ';
	}
	cout << '\n';
	sort(ivec.begin(),ivec.end());
	iter = ivec.begin();
	while (iter != ivec.end())
	{
		cout << *iter++ << ' ';
	}
	cout << '\n';
	vector<int>::iterator iter1 = unique(ivec.begin(),ivec.end());
	cout << *iter1 << endl;
	iter = ivec.begin();
	while (iter != ivec.end())
	{
		cout << *iter++ << ' ';
	}
	cout << '\n';
	return 0;
}
