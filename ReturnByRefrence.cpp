#include <iostream>
using namespace std;

int& greater(int &a, int &b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before modification:" << endl;
    cout << "x = " << x << "\t y = " << y << endl;

    greater(x, y) = 50;

    cout << "After modification:" << endl;
    cout << "x = " << x << "\t y = " << y << endl;

    return 0;
}