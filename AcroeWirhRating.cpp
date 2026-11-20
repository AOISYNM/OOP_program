//Create a class actor (name, rating) and display actors with a rating greater than 5 using constant objects
#include<iostream>
#include<string>
using namespace std;

class Actor{
	private:
		string name;
		float rate;
	public:
		Actor(string n , float r){
			name = n;
			rate = r;
		}
		void display() const{
			if(rate>5){
				cout << "Name: " << name << endl;
            	cout << "Rating: " << rate << endl;
			}
		}
};

int main(){
	const Actor a1("Adam", 8.5);
    const Actor a2("Eve", 4.5);
    const Actor a3("Ava", 7.2);
    const Actor a4("Harry", 5.0);
    
    cout << "Actors with rating greater than 5:"<<endl;

    a1.display();
    a2.display();
    a3.display();
    a4.display();
}

