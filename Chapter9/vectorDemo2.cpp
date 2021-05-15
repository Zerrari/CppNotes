#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10,10);
    vector<int>::iterator iter;
    iter = ivec.begin();
    ivec.push_back(0);
    ivec.insert(iter,3);
    while (iter != ivec.end())
    {
	cout << *iter << '\n';
	iter++;
    }
    return 0;
}
