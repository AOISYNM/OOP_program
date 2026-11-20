#include<iostream>
using namespace std;

class Student{
	private:
		int age;
		int id;
	public:
		//Default Constructor
		Student(){
			age = 17;
			id = 80887;
		}
		//Parameterized Constructor
		Student(int a , int b){
			age = a;
			id = b;
		}
		//Copy Constructor
		Student(const Student &s){
			age = s.age;
			id = s.id;
		}
		void display()
        {
            cout << "ID: " << id << endl;
            cout << "Age: " << age << endl;
        }
};

int main(){
	Student s1;
	cout<<"Default"<<endl;
	s1.display();
	Student s2(22,199201);
	cout<<"Parameterized"<<endl;
	s2.display();
	Student s3 = s2;
	cout<<"Copy"<<endl;
	s3.display();
	
}