//: Write a binary file handling program to write and read two Student objects (sid, sname, level) to/from a file3

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Student{
	private:
		int id;
		char name[40];
		int level;
	public:
		void get(){
			cout<<"Enter Student Id : ";
			cin>>id;
			cout<<"\nEnter Student Name : ";
			cin>>name;
			cout<<"\nEnter Student level : ";
			cin>>level;
		}
		void store(){
			ofstream fout("STD.DAT",ios::binary);
			fout.write((char *)this,sizeof(*this));
			fout.close();
		}
		void display(){
			cout<<"Name: "<<name<<endl;
			cout<<"Id: "<<id<<endl;
			cout<<"Level: "<<level<<endl;
		}
};

int main(){
	Student s[2];
	cout<<"----Enter Details of Students"<<endl;
	for (int i = 0 ; i < 2 ; i++){
		cout<<"Student : "<<i+1<<endl;
		s[i].get();
		s[i].store();
	}
	//Reading
	ifstream fin("STD.DAT", ios::binary);
	cout << "\n---- Student Details from File ----" << endl;
	
	for(int i = 0; i < 2; i++)
    {
        fin.read((char *)&s[i], sizeof(s[i]));

        cout << "\nStudent : " << i + 1 << endl;
        s[i].display();
    }
    fin.close();

    return 0;
	
}