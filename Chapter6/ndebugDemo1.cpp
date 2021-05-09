#include <iostream>
#define NDEBUG 1

using std::cin;
using std::cout;

int main()
{
   #ifndef NDEBUG
    cout << "error\n";
   #endif
    cout << "success";
}
