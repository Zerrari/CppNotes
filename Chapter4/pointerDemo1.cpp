#include <iostream>

using std::cin;
using std::cout;

int main()
{
  const int val1 = 10;
  int val2 = 10;
  const int *p1 = &val1;
  int *p2 = 0;
  p2 = &val1;
  *p1 = 20;    //error
  *p2 = 20;  
  p1 = &val2;
  *p1 = 20;   //error
  return 0;
}
