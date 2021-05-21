#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,int> m;
    map<string,int>::iterator iter;
    m["first"] = 1;
    iter = m.begin();
    cout << (*iter).first << endl;
    return 0;
}
