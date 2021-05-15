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
    cout << ivec.front() << endl;
    cout << ivec.back() << endl;
    cout << ivec[1] << endl;
    cout << ivec.at(2) << endl;
    return 0;
}
