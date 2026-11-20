#include<iostream>
using namespace std; 

class A{
	protected :
		int x = 10 ;
		
	public:
		void display(){
			cout << "This is a base class" <<endl;
		}
};

class B : public A{
	public :
		void show(){
			display();
			cout<<"This is a Child class"<<endl;
			cout<<x<<endl;
		}
};
int main(){
	B obj;
	obj.show();
	return 0;
}