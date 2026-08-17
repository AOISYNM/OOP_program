#include <iostream>
using namespace std;

class Account {
private:
    int acc_no;
    float balance;
    static float min_balance;

public:
    // Read values for an account
    void readData() {
        cout << "Enter account number: ";
        cin >> acc_no;
        cout << "Enter balance: ";
        cin >> balance;
    }

    // Display values for an account
    void displayData() {
        cout << "Account No: " << acc_no
             << "\tBalance: " << balance << endl;
    }

    
   

    // Static member function to display min_balance
    static void displayMinBalance() {
        cout << "Minimum Balance (common to all accounts): "
             << min_balance << endl;
    }
};

// Definition and initialization of static data member
float Account::min_balance = 500.0;

int main() {
    const int SIZE = 5;
    Account acc[SIZE];
    
    cout<<"Lab no : 8 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;


    // Read data for each account
    for (int i = 0; i < SIZE; i++) {
        cout << "\n--- Enter details for Account " << i + 1 << " ---\n";
        acc[i].readData();
    }

    // Display data for each account
    cout << "\n--- Account Details ---\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\nAccount " << i + 1 << ":\n";
        acc[i].displayData();
    }

    // Display min_balance again via static function
    cout << "\n";
    Account::displayMinBalance();

    return 0;
}	