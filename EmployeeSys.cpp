
#include<iostream>
#include<iomanip>
using namespace std;

class Employee{
	protected:
		string name;
		int age;
		string gender;
		
	public:
		Employee(string n , int a , string g){
			name = n;
			age = a;
			gender = g;
		}
};

class EmployeeSalary : public Employee{
	private:
		float monthlySalary = 0;
	public:
		EmployeeSalary(string n, int a, string g, float s): Employee(n, a, g){
			monthlySalary = s;
			
		}
		
		float calculateYearlySalary()
        {
            float yearlySalary = monthlySalary * 12;
            float tax = yearlySalary * 0.15;
            return yearlySalary - tax;
        }
        void display()
        {
            cout << "\n----- Employee Details -----" << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Gender: " << gender << endl;
            cout << "Monthly Salary: Rs. " << monthlySalary << endl;
            cout << "Yearly Salary (Before Tax): Rs. "<< monthlySalary * 12 << endl;
            cout << "Tax Deduction (15%): Rs. "<< monthlySalary * 12 * 0.15 << endl;
            cout << "Yearly Salary (After Tax): Rs. " << calculateYearlySalary() << endl;
        }
};

int main(){
	EmployeeSalary s1("Punjan" , 20 ,"Male" ,15843.17);
	
	s1.display();
	
	return 0;
	
	
	
}