#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec(10);
	vector<int>::iterator iter = ivec.begin();
	vector<int>::reverse_iterator iter2;
	int i = 0;
	while (iter != ivec.end())
	{
		*iter++ = i++;
	}
	iter2 = ivec.rbegin();
	while (iter2 != ivec.rend())
	{
		cout << *iter2++ << endl;
	}
        return 0;
}
