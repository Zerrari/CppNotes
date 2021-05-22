#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ivec(10);
	vector<int>::iterator iter = ivec.begin();
	int i = 0;
	while (iter != ivec.end())
	{
		*iter++ = i++;
	}
	// fill(ivec.begin(),ivec.end(),0);
	fill_n(ivec.begin(),10,0);
	iter = ivec.begin();
	while (iter != ivec.end())
	{
		cout << *iter++ << endl;
	}
	return 0;
}
