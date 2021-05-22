#include <iostream>
#include <vector>
#include <numeric>

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
	int sum = accumulate(ivec.begin(),ivec.end(),0);
	cout << sum << endl;
	return 0;
}
