#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inch;
public:
    Distance(){
	 feet = 0;
	 inch = 0;
	}
    Distance(int totalinch)
    {
        feet = totalinch / 12;
        inch = totalinch % 12;
    }
    void show()
    {
        cout << feet << " feet " << inch << " inch" << endl;
    }
};

int main()
{
	cout<<"Lab no : 15 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    int totalinch = 100;
    Distance d = totalinch;

    d.show();

    return 0;
}