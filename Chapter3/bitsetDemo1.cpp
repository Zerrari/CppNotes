#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::bitset;

int main()
{
  unsigned long val = 20;
  bitset<10> b1(val);
  bitset<4> b2("1100");
  string s("1100");
  for (int i = 0;i < 4;i++)
    {
	cout << b2[i] << '\n';
	cout << s[i] << '\n';
    }
  // cout << b2;
  return 0;
}
