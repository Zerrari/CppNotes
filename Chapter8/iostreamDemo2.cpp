#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;

int main()
{
    int x =20;
    cout << x << endl;
    cout << x << flush;
    cout << x << ends;
    cout << '\n';

    cout << "first" << flush << "second" << flush;
    cout << unitbuf << "first" << "second" << nounitbuf;
    return 0;
}
