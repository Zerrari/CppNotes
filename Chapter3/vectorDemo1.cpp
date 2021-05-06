#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::string;

int main()
{
  vector<int> v1;
  vector<int> v2(v1);
  vector<int> v3(10,0);
  vector<string> v4(10);
  int val = 10;
  v3.push_back(val);
  // for (unsigned long i = 0;i != v3.size();i++)
  //   cout << v3[i] << '\n';
  for (vector<int>::iterator iter = v3.begin();iter != v3.end();iter++)
    cout << *iter << '\n';
  return 0;
}
