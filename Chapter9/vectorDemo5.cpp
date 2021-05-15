#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(5);
    vector<int>::iterator iter;
    iter = ivec.begin();
    int num = 0;
    while (iter != ivec.end())
    {
	*iter++ = num++;
    }
    iter = ivec.begin();
    iter = ivec.erase(iter);
    cout << *iter << endl;
    ivec.pop_back();
    iter = ivec.end() - 1;
    cout << *iter << endl;
    cout << ivec.size() << endl;
    return 0;
}
