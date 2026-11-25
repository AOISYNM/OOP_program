// Create a class Account (acc_no, balance, static min_balance), include a static member function to display min_balance, and manipulate an 
//array of 5 Account objects

#include<iostream>

using namespace std;
	
class Account{
	private:
		int acc_no;
		float balance;
		static float min_balance;
	public:
		void  input (){
			cout<<"Enter Acc No :";
			cin>>acc_no;
			cout<<"\nEnter Acc Balance: ";
			cin>>balance;
		}
		void display(){
			cout<<"Account Number :"<<acc_no<<endl;
			cout<<"Account Balance : "<<balance<<endl;
		}
		static void display_min(){
			cout<<"The minimum balance is "<<min_balance<<endl;
			
		}
		
};

float Account::min_balance = 1000;

int main(){
	Account a[5];
	
	cout<<"Enter Account Details ----"<<endl;
	for(int i = 0 ; i < 5 ; i++){
		cout<<"Account NO:"<<i+1<<endl;
		a[i].input();
	}
	
	cout << "\n--- Account Details ---\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "\nAccount " << i + 1 << endl;
        a[i].display();
    }
    
    Account::display_min();
}