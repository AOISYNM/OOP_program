#include <iostream>
using namespace std;

class Actor
{
    string name;
    float rating;
public:
    Actor(string n, float r)
    {
        name = n;
        rating = r;
    }
    void display() const
    {
        if(rating > 5)
            cout << name << " " << rating << endl;
    }
};

int main()
{
	cout<<"Lab no : 12 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
	
    const Actor a1("Rajesh Dai", 10.0);
    const Actor a2("Biraj Bhatta", 3.2);
    const Actor a3("Nikhil Upreti", 9.0);

    a1.display();
    a2.display();
    a3.display();

    return 0;
}