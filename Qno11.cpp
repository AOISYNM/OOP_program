#include <iostream>
using namespace std;

class Object {
private:
    static int count; // static member shared by all objects

public:
    Object() {
        count++; // increment count every time an object is created
        cout << "Object created. Total objects so far: " << count << endl;
    }

    static int getCount() {
        return count;
    }
};

// Static member must be defined outside the class
int Object::count = 0;

int main() {
    cout << "--- Creating objects ---" << endl;
    Object obj1;
    Object obj2;
    Object obj3;

    cout << "\nTotal number of objects created: " << Object::getCount() << endl;

    return 0;
}