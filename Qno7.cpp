#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number of elements: ";
    cin>>n;

    // Dynamically allocate an array of n integers
    int *arr = new int[n];

    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"You entered: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout<<"Sum of elements = "<<sum<<endl;

    // Deallocate the dynamically allocated memory
    delete[] arr;

    // Dynamic allocation of a single variable
    int *single = new int;
    *single = 100;
    cout<<"\nSingle dynamic variable value = "<<*single<<endl;
    delete single;

    return 0;
}