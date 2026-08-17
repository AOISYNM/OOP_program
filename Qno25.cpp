#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
public:
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void show()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
	cout<<"Lab no : 25 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    Student s("Hari", 20);
    s.show();

    return 0;
}