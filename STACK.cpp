#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack
{
    T arr[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T value)
    {
        if(top == 4)
        {
            cout << "Stack Overflow!" << endl;
        }
        else
        {
            arr[++top] = value;
        }
    }

    void pop()
    {
        if(top == -1)
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            cout << "Deleted element: " << arr[top--] << endl;
        }
    }

    void display()
    {
        if(top == -1)
        {
            cout << "Stack is empty!" << endl;
        }
        else
        {
            cout << "Stack elements: ";
            for(int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack<int> s1;
    Stack<string> s2;

    cout << "--- Integer Stack ---" << endl;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();
    s1.display();

    cout << "\n--- String Stack ---" << endl;
    s2.push("Apple");
    s2.push("Banana");
    s2.push("Mango");
    s2.display();
    s2.pop();
    s2.display();

    return 0;
}