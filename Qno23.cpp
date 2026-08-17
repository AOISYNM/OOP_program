#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() = 0;
};

class Circle : public Shape
{
    float r;
public:
    Circle(float rad){ r = rad; }
    float area()
    { 
        return 3.14 * r * r;
    }
};

class Rectangle : public Shape
{
    float l, b;
public:
    Rectangle(float len, float wid){ l = len; b = wid; }
    float area()
    {
        return l * b;
    }
};

int main()
{
	cout<<"Lab no : 23 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    Shape *s;

    Circle c(5);
    Rectangle r(4, 6);

    s = &c;
    cout << "Circle area: " << s->area() << endl;

    s = &r;
    cout << "Rectangle area: " << s->area() << endl;

    return 0;
}