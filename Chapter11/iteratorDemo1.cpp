#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ivec(3);
	vector<int>::iterator iter = ivec.begin();
	int i = 0;
	while (iter != ivec.end())
	{
		*iter++ = i++;
	}
	fill_n(back_inserter(ivec),1,10);
	iter = ivec.begin();
	while (iter != ivec.end())
	{
		cout << *iter++ << endl;
	}
        return 0;
}
