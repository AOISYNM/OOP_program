#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called: Object created." << endl;
    }

    ~Demo() {
        cout << "Memory is released" << endl;
    }
};

int main() {
	cout<<"Lab no : 1 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
    cout<<"==============================================================="<<endl;

    cout << "--- Creating object inside main ---" << endl;
    Demo obj;
    cout << "--- End of main, object will now be destroyed ---" << endl;
    return 0;
}