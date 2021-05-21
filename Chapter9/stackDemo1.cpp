#include <iostream>
#include <stack>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    deque<int> invc(10);
    stack<int> intStack(invc);
    cout << intStack.top() << endl;
    cout << intStack.empty() << endl;
    intStack.push(3);
    cout << intStack.top() << endl;
    return 0;
}
