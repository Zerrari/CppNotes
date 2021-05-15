#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10,10);
    vector<int> ivec2(10);
    vector<int>::iterator iter;
    iter = ivec2.begin();
    while (iter != ivec2.end())
    {
	cout << *iter << '\n';
	iter++;
    }
    return 0;
}
