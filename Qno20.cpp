#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int age;
    string gender;
public:
    void getEmployee()
    {
        cout << "Enter name, age, gender: ";
        cin >> name >> age >> gender;
    }
};

class EmployeeSalary : public Employee
{
    float salary;
public:
    void getSalary()
    {
        getEmployee();
        cout << "Enter monthly salary: ";
        cin >> salary;
    }
    void showYearly()
    {
        float yearly = salary * 12;
        yearly = yearly - (yearly * 0.15);
        cout << "Name: " << name << endl;
        cout << "Yearly salary after tax: " << yearly << endl;
    }
};

int main()
{
	cout<<"Lab no : 20 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    EmployeeSalary e;
    e.getSalary();
    e.showYearly();

    return 0;
}