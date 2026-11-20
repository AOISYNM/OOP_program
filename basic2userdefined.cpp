#include<iostream>
using namespace std;

class Distance{
	private :
		int meter;
	public:
		Distance(int x){
			meter = x;
		}
		void show(){
			cout<<"Dist:"<<meter<<"m"<<endl;
		}
};


int main()
{
    int a = 10;

    // Basic to udefined conversion
    Distance d1(a);

    d1.show();

    return 0;
}