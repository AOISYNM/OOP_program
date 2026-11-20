// Create a class PERSON (name, age) and overload the greater-than (>) 
//operator to display the name of the elder person

#include<iostream>
using namespace std;

class Person{
	private:
		string name;
		int age;
	public:
		void getData()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }
    bool operator >(Person p){
    	return age>p.age;
	}
};

int main(){
	Person p1,p2;
	
	cout<<"Enter Det of 1st"<<endl;
	p1.getData();
	
	
	cout<<"Enter Det of 2nd"<<endl;
	p2.getData();
	
	if (p1>p2){
		cout << "Elder person: First person"<<endl;
	}
	else{
		cout << "Elder person: Second person"<<endl;
	}
	return 0;
	
	
}