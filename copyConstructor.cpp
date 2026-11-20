#include<iostream>
using namespace std;

class Student{
	private:
		int id;
		float marks;
	public:
		Student(int i , float m){
			id = i ;
			marks = m;
		}
		
		Student(const Student &s){
			id = s.id;
			marks = s.marks;
		}
		void show(){
			cout << "Student ID: " << id << endl;
            cout << "Student Marks: " << marks << endl;
		}
};


int main(){
	Student s1(70,80.99);
	Student s2 = s1;
	
	
    cout << "Original Object:" << endl;
    s1.show();
    
    
    cout << "Copied Object:" << endl;
    s2.show();
    
    return 0;
}