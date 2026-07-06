#include<iostream>
using namespace std;

void swapNumbers(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
	cout<<"Lab no : 1 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
	
    int x, y;

    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;

    cout<<"Before swapping: x = "<<x<<", y = "<<y<<endl;

    swapNumbers(x, y);

    cout<<"After swapping: x = "<<x<<", y = "<<y<<endl;

    return 0;
}