#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> ivec(5,0);
	cout << ivec.size() << endl;
	fill_n(back_inserter(ivec),10,0);
	cout << ivec.size() << endl;
	return 0;
}
