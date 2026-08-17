#include<iostream>
using namespace std;

void displayChar(char ch = '*', int n = 5){
    for(int i = 0; i < n; i++){
        cout<<ch;
    }
    cout<<endl;
}

int main(){
	cout<<"Lab no : 3 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
	
    cout<<"Default call (no arguments): ";
    displayChar();               

    cout<<"Only character given: ";
    displayChar('#');              

    cout<<"Both arguments given: ";
    displayChar('$', 10);         

    return 0;
}