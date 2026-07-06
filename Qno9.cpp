#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // 1. Default Constructor
    // Called when an object is created without any arguments.
    Student() {
        rollNo = 0;
        name = "Unknown";
        cout << "Default Constructor called." << endl;
    }

    // 2. Parameterized Constructor
    // Called when an object is created with arguments,
    Student(int r, string n) {
        rollNo = r;
        name = n;
        cout << "Parameterized Constructor called." << endl;
    }

    // 3. Copy Constructor
    // Called when a new object is created as a copy of an existing object of the same class.
    Student(const Student &s) {
        rollNo = s.rollNo;
        name = s.name;
        cout << "Copy Constructor called." << endl;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    cout << "--- Creating s1 using Default Constructor ---" << endl;
    Student s1;
    s1.display();

    cout << "\n--- Creating s2 using Parameterized Constructor ---" << endl;
    Student s2(101, "Alice");
    s2.display();

    cout << "\n--- Creating s3 using Copy Constructor (from s2) ---" << endl;
    Student s3(s2);
    s3.display();

    cout << "\n--- Creating s4 using Copy Constructor (copy-initialization syntax) ---" << endl;
    Student s4 = s2;
    s4.display();

    return 0;
}
