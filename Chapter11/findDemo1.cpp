#include <iostream>
#include <algorithm>
#include <vector>

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
    iter = find(ivec.begin(),ivec.end(),7);
    cout << *iter << endl;
    return 0;
}
