//Write a program illustrating the application of a friend function1
#include<iostream>
using namespace std;

class Number{
	private:
		int a , b;
	public:
		Number(int x , int y){
			a = x;
			b = y;
		}
		friend void sum(Number s);
		
};

void sum(Number s){
	cout<<"Sum :"<<s.a+s.b<<endl;
	
}

int main(){
	Number n(18,20);
	sum(n);
	
	return 0;
}