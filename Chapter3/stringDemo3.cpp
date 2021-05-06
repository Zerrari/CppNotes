#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string s1("hello");
    string s2("world");
    // string s3 = "hello" + " " + s2;  error
    cout << s1.size() << '\n';
    cout << s1 + s2;
    return 0;
}
