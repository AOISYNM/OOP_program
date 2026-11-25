#include<iostream>
using namespace std;

inline int sum (int a , int b){
	return a + b ;
}

int main(){
	int a , b ;
	cout<<"Enter Two Values : ";
	cin>>a>>b;
	
	cout<<"Sum is:"<<sum(a,b)<<endl;
	
	return 0;
}