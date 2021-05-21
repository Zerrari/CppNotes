#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<string,int> mint;
    mint.insert(make_pair(("world"),1));
    mint.insert(make_pair(("world"),2));
    mint.insert(make_pair(("hello"),3));
    mint.insert(make_pair(("hello"),4));
    mint.insert(make_pair(("hello"),5));
    mint.insert(make_pair(("anna"),6));
    // multimap<string,int>::iterator iter = mint.lower_bound("hello");
    multimap<string,int>::iterator iter = mint.equal_range("hello").first;
    while (iter != mint.equal_range("hello").second)
    {
	cout << (*iter).first;
	cout << ":" << (*iter).second << endl;
	iter++;
    }
    return 0;
}
