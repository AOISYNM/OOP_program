#include <iostream>
using namespace std;

int main()
{
    int *ptr;

    // Dynamic memory allocation
    ptr = new int;

    cout << "Enter a number: ";
    cin >> *ptr;

    cout << "The number is: " << *ptr << endl;

    // Deallocate memory
    delete ptr;

    return 0;
}