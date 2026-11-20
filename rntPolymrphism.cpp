#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void sound()=0;	
};

class Snake : public Animal{
	public:
		void sound(){
			cout<<"Snake:Hiss"<<endl;
		}
};

class Dog : public Animal{
	public:
		void sound(){
			cout<<"DOg: ref-raf"<<endl;
		}
};

class Cat : public Animal{
	public:
		void sound(){
			cout<<"Cat: Meow"<<endl;
		}
};

int main(){
	Snake s;
	Dog d;
	Cat c;
	
	Animal *ptr;
	
	ptr =&s;
	prt -> sound();
	
	ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();
    
    return 0;
}