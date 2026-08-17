#include <iostream>
using namespace std;

template <class T>
void swaps(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
	cout<<"Lab no : 26 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    int a = 5, b = 10;
    float x = 1.5, y = 2.5;
    char c1 = 'A', c2 = 'B';

    swaps(a, b);
    cout << "int: " << a << " " << b << endl;

    swaps(x, y);
    cout << "float: " << x << " " << y << endl;

    swaps(c1, c2);
    cout << "char: " << c1 << " " << c2 << endl;

    return 0;
}