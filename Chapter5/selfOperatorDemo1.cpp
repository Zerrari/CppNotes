#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main()
{
  vector<int> ivec;
  int cnt = 10;
  while (cnt > 0)
    {
      ivec.push_back(cnt--);
    }
  vector<int>::iterator iter = ivec.begin();
  while (iter != ivec.end())
    {
      cout << *iter++ << '\n';
    }
  return 0;
}
