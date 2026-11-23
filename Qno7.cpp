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

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout<<"Sum of elements = "<<sum<<endl;

    // Deallocate the dynamically allocated memory
    delete[] arr;

    cout<<"==============================================================="<<endl;

    cout<<"Lab no : 1 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	
    return 0;
}