//Create a class BOOK (name, price) with a member function that accepts 
//two BOOK objects and returns the object with the lower price

#include <iostream>
#include <string>
using namespace std;

class Book
{
    private:
        string name;
        float price;

    public:
        Book(string n, float p)
        {
            name = n;
            price = p;
        }

        Book compare(Book a, Book b)
        {
            if(a.price < b.price)
                return a;
            else
                return b;
        }

        void display()
        {
            cout << "Book name: " << name << endl;
            cout << "Price: " << price << endl;
        }
};

int main()
{
    Book b1("Science", 500);
    Book b2("Math", 700);

    Book lower = b1.compare(b1, b2);

    cout << "Book with lower price:"<<endl;
    lower.display();

    return 0;
}