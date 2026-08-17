#include<iostream>
using namespace std;
#define pi 3.14

inline float areaOfCircle(float radius){
    return pi * radius * radius;
}

int main(){
	cout<<"Lab no : 5 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
	
    float radius;

    cout<<"Enter the radius of the circle: ";
    cin>>radius;

    cout<<"Area of the circle = "<<areaOfCircle(radius)<<" sq.units"<<endl;

    return 0;
}