#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::string;

int main()
{
  char ca[] = {'a','b','v'};
  const char *cp = "some value";
  const char *s1 = "some";
  const char *s2 = "soma";
  // while (*cp)
  //   {
  //     cout << *cp;
  //     cp++;
  //   }
  cout << strlen(ca);
  cout << strcmp(s1,s2);
  return 0;
}
