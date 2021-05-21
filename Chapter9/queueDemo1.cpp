#include <iostream>
#include <queue>
#include <deque>

using namespace std;

int main()
{
    deque<int> intd(10,1);
    queue<int> qint(intd);
    return 0;
}
