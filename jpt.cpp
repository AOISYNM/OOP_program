#include<iostream>
using namespace std;

void display(char ch ,int n =5){
	for (int i=1; i<=n ; i++){
		cout<<ch;
	}
}

int main(){
	char ch;
	int n;
	
	cout << "Enter a character: ";
    cin >> ch;

    cout << "Enter number of occurrences: ";
    cin >> n;

    display(ch, n);

    return 0;
}