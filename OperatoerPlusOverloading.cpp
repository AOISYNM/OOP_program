#include <iostream>
using namespace std;

class Height
{
    int meter, centimeter;

public:
    Height(int m, int cm)
    {
        meter = m;
        centimeter = cm;
    }

    friend Height operator+(Height h1, Height h2);

    void display()
    {
        cout << meter << " meter " << centimeter << " centimeter";
    }
};

Height operator+(Height h1, Height h2)
{
    Height temp(0, 0);

    temp.meter = h1.meter + h2.meter;
    temp.centimeter = h1.centimeter + h2.centimeter;

    if(temp.centimeter >= 100)
    {
        temp.meter++;
        temp.centimeter -= 100;
    }

    return temp;
}

int main()
{
    Height h1(5, 80);
    Height h2(3, 50);

    Height h3 = h1 + h2;

    cout << "First height: "<<endl;
    h1.display();

    cout << "\nSecond height: "<<endl;
    h2.display();

    cout << "\nTotal height: "<<endl;
    h3.display();

    return 0;
}