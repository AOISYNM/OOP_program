#include<iostream>
using namespace std;

class Employee{
	protected:
		string name;
		int id;
	public:
		Employee(string n,int i){
			name = n;
			id = i;
		}
		void displayEmp(){
			cout<<"Name: "<<name<<endl;
			cout<<"Id: "<<id<<endl;
		}
};

class Manager:public Employee{
	protected:
		string depmt;
	public :
		Manager(string n,int i,string d):Employee(n,i){
			depmt = d;
		}
	void displayManager(){

        displayEmp();
        cout << "Department: " <<depmt << endl;
    }
};

class CEO:public Manager{
	protected:
		string level;
	public:
		CEO(string n, int i, string d, string l):Manager(n,i,d){
			
			level = l;
			
		}
		void display(){
			displayManager();
			cout << "CEO Level: " << level << endl;
		}
};


int main(){
    CEO c("Hari", 101, "Finance", "Senior");

    cout << "Organizational Details" << endl;
    c.display();

    return 0;
}






