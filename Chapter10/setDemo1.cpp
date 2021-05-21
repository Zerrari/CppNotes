#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    vector<int> ivec(10,1);
    vector<int>::iterator iter = ivec.begin();
    int i = 1;
    while (iter != ivec.end())
    {
	*iter++ = i;
	*iter++ = i++;
    }
    set<int> iset(ivec.begin(),ivec.end());
    cout << iset.size() << endl;
    return 0;
}
