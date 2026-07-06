#include<iostream>
#include<cstring>
using namespace std;

class StringOps{
    public:
        void reverseit(char str[]){
            int len = strlen(str);
            int start = 0;
            int end = len - 1;

            for(int i = 0; i < len/2; i++){
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
        }
};

int main(){
	cout<<"Lab no : 1 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
    StringOps obj;
    char text[100];

    cout<<"Enter a string: ";
    cin.getline(text, 100);

    obj.reverseit(text);

    cout<<"Reversed string: "<<text<<endl;

    return 0;
}