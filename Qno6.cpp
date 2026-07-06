#include<iostream>
using namespace std;

// Overloaded sort() for integers
void sort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Overloaded sort() for characters
void sort(char arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Overloaded sort() for floating point numbers
void sort(float arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
	cout<<"Lab no : 1 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
	
    int intArr[] = {50, 20, 40, 10, 30};
    char charArr[] = {'d', 'a', 'c', 'b'};
    float floatArr[] = {3.3, 1.1, 4.4, 2.2};

    int n1 = 5, n2 = 4, n3 = 4;

    sort(intArr, n1);
    sort(charArr, n2);
    sort(floatArr, n3);

    cout<<"Sorted integers: ";
    for(int i = 0; i < n1; i++)
        cout<<intArr[i]<<" ";
    cout<<endl;

    cout<<"Sorted characters: ";
    for(int i = 0; i < n2; i++)
        cout<<charArr[i]<<" ";
    cout<<endl;

    cout<<"Sorted floats: ";
    for(int i = 0; i < n3; i++)
        cout<<floatArr[i]<<" ";
    cout<<endl;

    return 0;
}