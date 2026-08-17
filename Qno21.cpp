#include <iostream>
using namespace std;

class A
{
public:
    int x;
    void show()
    {
        cout << "x = " << x << endl;
    }
};

class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
};

int main()
{
	cout<<"Lab no : 21 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    D obj;
    obj.x = 10;
    obj.show();

    return 0;
}