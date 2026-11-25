#include<iostream>
#include<fstream>

using namespace std;

int main(){
	char ch;
	fstream file;
	
	file.open("data.txt",ios::out);
	file<<"ABCDEFGHIJ";
	file.close();
	
	file.open("data.txt",ios::in);
	//Display current position
	cout<<"Current position: "<<file.tellg()<<endl;
	
	// Reading first character
	file.get(ch);
	cout<<"Character read: "<<ch<<endl;
	
	
	// Display position after reading
	cout<<"Current position: "<<file.tellg()<<endl;

	// Moving pointer to position 5
	file.seekg(5);

	// Reading character at position 5
	file.get(ch);
	cout<<"Character at position 5: "<<ch<<endl;

	// Display current position
	cout<<"Current position: "<<file.tellg()<<endl;

	file.close();

	return 0;

}