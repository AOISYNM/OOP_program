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
    Distance(int f, int i){
		 feet = f;
		 inch = i; 
	}

    Distance operator+(Distance d)
    {
        int f = feet + d.feet;
        int i = inch + d.inch;
        if(i >= 12)
        {
            i = i - 12;
            f = f + 1;
        }
        return Distance(f, i);
    }
    void show()
    {
        cout << feet << " feet " << inch << " inch" << endl;
    }
};

int main()
{
	cout<<"Lab no : 13 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    Distance d1(5, 8);
    Distance d2(3, 7);
    Distance d3;

    d3 = d1 + d2;
    d3.show();

    return 0;
} 