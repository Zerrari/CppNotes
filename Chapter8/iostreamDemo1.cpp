#include <iostream>

using std::ofstream;

int main()
{
    ofstream o1,o2;
    o1 = o2; //error 
    print(o1);
    return 0;
}
