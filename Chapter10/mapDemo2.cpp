#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,int> word;
    cout << word.empty() << endl;
    word["Hello"] = 1;
    word["world"] = 2;
    cout << word.empty() << endl;
    cout << word.size() << endl;
    return 0;
}
