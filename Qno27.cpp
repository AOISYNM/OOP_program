#include <iostream>
using namespace std;

int main()
{
	cout<<"Lab no : 27 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    int age;
    cout << "Enter age: ";
    cin >> age;

    try
    {
        if(age < 0)
            throw age;
        if(age > 200)
            throw string("Age too large");

        cout << "Valid age: " << age << endl;
    }
    catch(int e)
    {
        cout << "Error: negative age entered (" << e << ")" << endl;
    }
    catch(string s)
    {
        cout << "Error: " << s << endl;
    }

    return 0;
}