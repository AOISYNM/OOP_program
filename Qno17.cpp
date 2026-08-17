#include <iostream>
using namespace std;

class Distance
{
public:
    int feet;
    int inch;
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
};

class Meters
{
    float meter;
    float cm;
public:
    Meters(Distance d)
    {
        meter = d.feet / 3.3;
        cm = d.inch / 0.4;
    }
    void show()
    {
        cout << meter << " meter " << cm << " cm" << endl;
    }
};

int main()
{
	cout<<"Lab no : 17 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    Distance d(9, 8);
    Meters m = d;

    m.show();

    return 0;
} 