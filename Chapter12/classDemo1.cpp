#include <iostream>
#include <string>

class person{
public:
	int age;
	int salary;
	std::string name;
	int get_age() const
		{
			return this->age;
		}
	person():age(20),salary(100){}
private:
};

int main()
{

        return 0;
}
