#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

string outer_var;

int main()
{
  string inner_var;
  string x1;
  string x2(x1);
  string x3("value");
  string x4(10,'c');
  // cout << x1 << '\n' << x2 << '\n' << x3 << '\n' << x4 << '\n';
  cout << outer_var << "a\n" << inner_var;
  return 0;
}
