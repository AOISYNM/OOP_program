#include<iostream>
using namespace std;

class B;

class A{
	private:
		int x;
	public:
		void get(){
			cout<<"Enter Number: "<<endl;
			cin>>x;
			
		}
		friend void display(A,B);
};

class B{
	private:
		int y;

	public:
		void get(){
			cout<<"Enter value of y: ";
			cin>>y;
		}
		
		friend void display(A,B);
		friend class A;	
};

void display(A a, B b){
	cout<<"\nValue of x = "<<a.x;
	cout<<"\nValue of y = "<<b.y;
	cout<<"\nSum = "<<a.x+b.y;
}

int main(){
	A a;
	B b;

	a.get();
	b.get();

	display(a,b);

	return 0;
}
