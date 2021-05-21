#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,int> word;
    word["hello"] = 1;
    word["world"] = 2;
    word["anna"] = 3;
    cout << word.count("world") << endl;
    map<string,int>::iterator iter = word.find("world");
    cout << (*iter).second << endl;
    cout << (*iter).first << endl;
    return 0;
}
