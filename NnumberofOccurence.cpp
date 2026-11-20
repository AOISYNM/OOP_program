#include <iostream>
using namespace std;

void display(char ch, int n = 5)
{
    for(int i = 1; i <= n; i++)
    {
        cout << ch;
    }
}

int main()
{
    char c;
    int n;

    cout << "Enter a character: ";
    cin >> c;

    cout << "Enter number of occurrences: ";
    cin >> n;

    cout << "Output: ";
    display(c, n);

    cout << "\nUsing default argument: ";
    display(c);

    return 0;
}