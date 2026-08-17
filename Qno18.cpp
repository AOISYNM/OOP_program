#include <iostream>
using namespace std;

class Author
{
protected:
    string name;
    string qualification;
public:
    void getdata()
    {
        cout << "Enter author name and qualification: ";
        cin >> name >> qualification;
    }
    void putdata()
    {
        cout << "Author: " << name << " (" << qualification << ")" << endl;
    }
};

class Publication
{
protected:
    string pname;
public:
    void getdata()
    {
        cout << "Enter publication name: ";
        cin >> pname;
    }
    void putdata()
    {
        cout << "Publication: " << pname << endl;
    }
};

class Book : public Author, public Publication
{
    string title;
    float price;
public:
    void getdata()
    {
        Author::getdata();
        Publication::getdata();
        cout << "Enter title and price: ";
        cin >> title >> price;
    }
    void putdata()
    {
        Author::putdata();
        Publication::putdata();
        cout << "Title: " << title << ", Price: " << price << endl;
    }
};

int main()
{
	cout<<"Lab no : 18 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    Book b;
    b.getdata();
    b.putdata();

    return 0;
}