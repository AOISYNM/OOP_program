#include <iostream>
using namespace std;

int main()
{
    char ch;
    char str[100];

    cout << "Enter a character: ";
    cin.get(ch);

    cout << "Entered character is: " << ch << endl;

    cin.ignore();

    cout << "Enter a full sentence: ";
    cin.getline(str, 100);

    cout << "Entered sentence is: " << str << endl;

    return 0;
}