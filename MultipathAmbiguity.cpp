	//: Demonstrate resolving multipath inheritance ambiguity using a virtual base class with a code example
	
	#include<iostream>
	using namespace std;
	
	class A{
		private:
			int x ;
		public:
			void get(){
				cout<<"Enter A  Number: ";
				cin>>x;
			}
			void display(){
				cout<<"\nThe number is : "<<x<<endl;
			}
	};
	
	class B:virtual public A{
	};
	class C:virtual public A{
	};
	class D: public B , public C{
		
	};
	
	int main(){
		D d;
		d.get();
		d.display();
		
		return 0;
		
	}