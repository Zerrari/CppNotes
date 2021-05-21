#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<string,int> mint;
    mint.insert(make_pair(("hello"),1));
    mint.insert(make_pair(("hello"),2));
    mint.insert(make_pair(("hello"),3));
    cout << mint.size() << endl;
    cout << mint.erase("hello") << endl;
    return 0;
}
