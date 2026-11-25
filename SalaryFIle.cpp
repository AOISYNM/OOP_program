//Q11: Write a program to store employee information in a file and display the 
//records in ascending order of their salary

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

class Employee{
	private:
		char name[50];
		float salary;
		int id;
	public:
		void getEmp(){
    cout<<"Enter Name : ";
    cin.getline(name,50);

    cout<<"\nEnter Salary: ";
    cin>>salary;

    cout<<"\nEnter Id : ";
    cin>>id;

    cin.ignore(1000,'\n');
}
		void store(){
			ofstream fout("EMP.DAT",ios::binary | ios::app);
			fout.write((char *)this,sizeof(*this));
			fout.close();
		}
		
		void display(){
			cout<<"\t"<<name<<"\t"<<salary<<"\t"<<id;
		}
		
		float getSal(){
			return salary;
		}
};

int main(){
	Employee e[100], temp;
	int n;
	cout<<"Enter the Number of Employees: "<<endl;
	cin>>n;
	cin.ignore(1000, '\n');
	cout<<"Enter Employee Details :"<<endl;
	for (int i = 0 ; i < n; i++){
		e[i].getEmp();
		e[i].store();
	}
	
	//sortingf now
	for (int i = 0 ; i < n; i++){
		for(int j=i+1; j<n; j++){
			if(e[i].getSal()>e[j].getSal()){
				temp = e[i];
				e[i] = e[j];
				e[j] = temp;
			}
		}
		
	}
	
    // Displaying sorted records
	cout<<"\n\nEmployee Records in Ascending Order of Salary"<<endl;
	cout<<"\nName\tSalary\tId\n";
	
	for(int i = 0 ; i < n ; i++){
		e[i].display();
		cout<<endl;
	}

	return 0;

	
}