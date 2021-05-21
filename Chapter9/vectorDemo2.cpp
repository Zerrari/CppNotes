#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10,10);
    vector<int>::iterator iter;
    iter = ivec.begin();
    ivec.push_back(0);
    iter = ivec.begin();
    ivec.insert(iter,3);
    iter = ivec.begin();
    while (iter != ivec.end())
    {
	cout << *iter << '\n';
	iter++;
    }
    return 0;
}
