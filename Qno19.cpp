#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
public:
    void getPerson()
    {
        cout << "Enter name: ";
        cin >> name;
    }
    void showPerson()
    {
        cout << "Name: " << name << endl;
    }
};

class Employee : public Person
{
protected:
    int empid;
public:
    void getEmployee()
    {
        getPerson();
        cout << "Enter employee id: ";
        cin >> empid;
    }
    void showEmployee()
    {
        showPerson();
        cout << "Emp ID: " << empid << endl;
    }
};

class Manager : public Employee
{
    string dept;
public:
    void getManager()
    {
        getEmployee();
        cout << "Enter department: ";
        cin >> dept;
    }
    void showManager()
    {
        showEmployee();
        cout << "Department: " << dept << endl;
    }
};

int main()
{
	cout<<"Lab no : 19 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    Manager m;
    m.getManager();
    m.showManager();

    return 0;
}