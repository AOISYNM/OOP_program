#include <iostream>
using namespace std;

class TIME
{
    int hour, minutes;

public:
    TIME(int m)
    {
        hour = m / 60;
        minutes = m % 60;
    }

    void display()
    {
        cout << "Time = " << hour << " hours and "<< minutes << " minutes";
    }
};

int main()
{
    int m = 255;
    cout<<"Minutes = "<<m<<endl;

    TIME t = m;

    t.display();

    return 0;
}