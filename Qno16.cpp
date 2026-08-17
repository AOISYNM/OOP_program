#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inch;
public:
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    operator float()
    {
        return feet * 12 + inch;
    }
};

int main()
{
	cout<<"Lab no : 16 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    Distance d(5, 8);
    float totalinch = d;

    cout << "Total inches = " << totalinch << endl;

    return 0;
}