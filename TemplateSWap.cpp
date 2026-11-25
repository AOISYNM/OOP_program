// Create a template function swaps() that interchanges two numbers passed by reference for any numeric data type
#include<iostream>
#include <iostream>
using namespace std;

template <class T>
void swaps(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    float p = 2.5, q = 5.5;
    double m = 12.45, n = 25.65;

    swaps(x, y);
    swaps(p, q);
    swaps(m, n);

    cout << "After swapping integers: " << x << " " << y << endl;
    cout << "After swapping floats: " << p << " " << q << endl;
    cout << "After swapping doubles: " << m << " " << n << endl;

    return 0;
}