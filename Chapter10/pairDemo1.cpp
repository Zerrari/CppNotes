#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int,int> inpair;
    inpair = make_pair(1,2);
    cout << inpair.first << endl;
    cout << inpair.second << endl;
    return 0;
}
