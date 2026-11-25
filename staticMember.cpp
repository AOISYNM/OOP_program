//Write a program to count and display the number of active objects created using a static member variable

#include<iostream>
using namespace std;

class Student{
	private:
		int id;
		static int count;
	public:
		Student(){
		id = 7;
		count ++;
			
		}
		void display(){
			cout<<"Number of Objects : "<<count<<endl;
		}
		
};

int Student::count = 0;
int main(){
	Student s1 , s2;
	s1.display();
	Student s3 , s4 , s5 ;
	s2.display();
	
	return 0;
}