#include<iostream>
using namespace std;

template <class T1 , class T2>

void display(T1 a , T2 b){
	cout<<"First value :"<<a<<endl;
	cout <<"Second Value : "<<b<<endl;
}

int main(){
	display(56,5.6);
	display(78,"Muji0");
	
}