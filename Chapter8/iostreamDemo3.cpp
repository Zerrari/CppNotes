#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;


int main()
{
    ifstream infile("file");
    // ifstream infile;
    // infile.open("file3");
    if (infile)
    {
	cout << "success" << endl;
    }
    else
    {
	cout << "error" << endl;
    }
    return 0;
}
