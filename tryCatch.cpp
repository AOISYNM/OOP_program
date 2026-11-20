
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    try
    {
        char ch = tolower(str[0]);

        if(ch != 'a' && ch != 'e' && ch != 'i' &&
           ch != 'o' && ch != 'u')
        {
            throw str;
        }

        cout << "String starts with a vowel." << endl;
    }

    catch(string s)
    {
        cout << "Exception caught!" << endl;
        cout << "String does not start with a vowel." << endl;
    }

    return 0;
}
