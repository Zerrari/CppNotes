#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10,0);
    vector<int>::iterator iter;
    cout << ivec.size() << endl;
    cout << ivec.max_size() << endl;
    ivec.resize(5);
    cout << ivec.size() << endl;
    ivec.resize(3,1);
    iter = ivec.begin();
    while (iter != ivec.end())
    {
	cout << *iter << endl;
	iter++;
    }
    ivec.resize(5,1);
    iter = ivec.begin();
    while (iter != ivec.end())
    {
	cout << *iter << endl;
	iter++;
    }
    return 0;
}
