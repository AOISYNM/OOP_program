// Create two classes Rupee and Dollar and write a conversion operator to 
//convert amounts between both currencies ($1 Dollar = 133 Rupees)

#include<iostream>
using namespace std;

class Dollar;

class Rupee{
	private:
		float amount;
		
	public:
		Rupee(float r){
			amount = r;
		}
	void display()
    {
        cout << "Amount in Rupees: Rs. " << amount << endl;
    }
    
    operator Dollar();
};

class Dollar{
	private:
		float amount;

	public:
   		Dollar(float d){
        	amount = d;
    	}
    	void display(){
        cout << "Amount in Dollars: $ " << amount << endl;
		}
		operator Rupee(){
			return Rupee(amount*133);
		}
};

Rupee::operator Dollar(){
	return Dollar(amount/133);
}

int main()
{
    Rupee r(1330);
    Dollar d = r;

    cout << "Rupee to Dollar conversion:"<<endl;
    r.display();
    d.display();

    Dollar d1(10);
    Rupee r1 = d1;

    cout << "\nDollar to Rupee conversion:"<<endl;
    d1.display();
    r1.display();

    return 0;
}