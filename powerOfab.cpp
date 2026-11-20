#include<iostream>
using namespace std;

int Power(int a , int b=2){
	int result = 1 ;
	for (int i = 1 ; i <= b ; i++){
		result = result*a;
	}
	return result;
}

int main(){
	int a , b ;
	cout << "Enter the value of a: ";
    cin >> a;

    cout << "Power with default argument: "<< Power(a) << endl;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Power(a, b) = " << Power(a, b) << endl;
    
    return 0;
}