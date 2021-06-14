#include <iostream>

using namespace std;

class Hasptr{
public:
	Hasptr(int *p,int i):ptr(p),val(i){}
	void setptr(int *p){ptr = p;}
	void setval(int x){val = x;}
	int *getptr() const{return ptr;}
	int getval() const{return val;}
private:
	int *ptr;
	int val;
};

int main()
{
	int obj = 10;
	Hasptr ptr1(&obj,20);
	cout << ptr1.getptr() << endl;
	cout << ptr1.getval() << endl;
        return 0;
}
