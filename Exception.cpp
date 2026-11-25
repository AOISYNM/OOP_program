//Write an exception handling program to validate age input, throwing an exception if age < 0 or age > 200
#include<iostream>
using namespace std;

int main(){
	int age;
	cout<<"Enter age:";
	cin>>age;
	
	try{
		if(age<0)
		throw"Age cannot be less than 0";
		else if (age > 200)
		throw"Age Cannot be more than 200 ";
		else
		throw"Valid Age";
	}
	catch(const char*msg){
		cout<<msg<<endl;
	}
	return 0;
}