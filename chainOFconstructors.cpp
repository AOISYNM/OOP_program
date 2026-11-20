
#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout << "Constructor of Base Class A" << endl;
        }

        ~A()
        {
            cout << "Destructor of Base Class A" << endl;
        }
};

class B : public A
{
    public:
        B()
        {
            cout << "Constructor of Derived Class B" << endl;
        }

        ~B()
        {
            cout << "Destructor of Derived Class B" << endl;
        }
};

class C : public B
{
    public:
        C()
        {
            cout << "Constructor of Derived Class C" << endl;
        }

        ~C()
        {
            cout << "Destructor of Derived Class C" << endl;
        }
};

int main()
{
    C obj;

    return 0;
}
