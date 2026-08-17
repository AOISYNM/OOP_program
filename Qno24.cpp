	#include <iostream>
using namespace std;

class B;

class A
{
    int x;
public:
    A(int val){ x = val; }
    friend int sum(A, B);
};

class B
{
    int y;
public:
    B(int val){ y = val; }
    friend int sum(A, B);
};

int sum(A a, B b)
{
    return a.x + b.y;
}

int main()
{
	cout<<"Lab no : 24 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    A a(10);
    B b(20);

    cout << "Sum = " << sum(a, b) << endl;

    return 0;
}