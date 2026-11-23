#include<iostream>
using namespace std;

class Emp{
	protected:
		int id;
		string name;
	public:
		void getEmp(){
			cout<<"Enter Employee Id"<<endl;
			cin>>id;
			
			cout<<"Enter Employee Name"<<endl;
			cin>>name;
		}
		void displayEmp(){
			cout<<"Employee ID:"<<id<<endl;
			cout<<"Employee name:"<<name<<endl;
		}
};

class Teacher:public Emp{
	private :
		string sub;
		float salary;
	public :
		void getTeach(){
			getEmp();
			cout<<"Enter Subject:"<<endl;
			cin>>sub;
			cout<<"Enter Salary:"<<endl;
			cin>>salary;
			
		}
		void displayTeach(){
			displayEmp();
			cout<<"Subject:"<<sub<<endl;
			cout<<"Salary:"<<salary<<endl;
		}
};

class Staff:public Emp{
	private:
		string dept;
		float salary;
	public:
		void getStaff(){
			getEmp();
			cout<<"Enter Department: "<<endl;
			cin>>dept;
			cout<<"Enter Salary: "<<endl;
			cin>>salary;
		}
		void displayStaff(){
			displayEmp();
			cout<<"Department:"<<dept<<endl;
			cout<<"Salary:"<<salary<<endl;
		}
};


int main(){
	
	Teacher t;
	Staff s;
	
	cout<<"Teacher INFO"<<endl;
	t.getTeach();
	
	cout<<"Staff INFO"<<endl;
	s.getStaff();
	
	cout<<"Teacher Details"<<endl;
	t.displayTeach();
	
	cout<<"Staff Details"<<endl;
	s.displayStaff();
		
	
	
	
	return 0;
}