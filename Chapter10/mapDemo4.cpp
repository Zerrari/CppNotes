#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,int> word;
    word["hello"] = 1;
    word["word"] = 2;
    word["anna"] = 3;
    cout << word.size() << endl;
    word.erase("hello");
    cout << word.size() << endl;
    map<string,int>::iterator iter = word.begin();
    word.erase(iter);
    cout << word.size() << endl;
    return 0;
}
