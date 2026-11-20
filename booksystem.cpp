#include<iostream>
#include<cstring>
using namespace std;

class Book{
	private:
		char *author, *title, *publisher; 
    	float price;
    	int stock;
		
	public:
	 Book(const char a[], const char t[], float p,const char pub[], int s)
    {
        author = new char[strlen(a) + 1];
        strcpy(author, a);

        title = new char[strlen(t) + 1];
        strcpy(title, t);

        publisher = new char[strlen(pub) + 1];
        strcpy(publisher, pub);

        price = p;
        stock = s;
    }
    
    void checkAvailabilty(){
    	char bookName[30];
    	int copies;
    	
    	cout<<"Enter Book Title"<<endl;
    	cin.ignore();
    	cin.getline(bookName, 30);
    	
    	
    	if (strcmp(title , bookName)==0){
    		if (stock > 0){
    			cout<<"Book is Availabe with stock " <<stock<<endl;
    			cout << "\nAvailable stock: "<< stock<<endl;
    			cout<<"Enter Number of copies required"<<endl;
				cin>>copies;
				if(copies > stock || copies < 1){
					cout<<"Invalid Number of Copies"<<endl;
				}
				else{
					cout << "\nTotal cost = Rs. "<< price * copies;
					stock -= copies;
				}
				
			}
			else{
				cout<<"Book is Out of stock at the moment"<<endl;
			}
		}
		else{
			cout << "\nBook not found!"<<endl;
		}
	}
	
	 ~Book()
    {
        delete[] author;
        delete[] title;
        delete[] publisher;
    }
};

int main()
{
    Book b1("Laxmi Devkota",
             "Muna Madan",
             800,
             "XYZ",
             10);

    cout << "BOOK SHOP INVENTORY SYSTEM"<<endl;
    
    int choice;
    cout<<"Do you want to check availability"<<endl;
    cout<<"--------------------Enter (1) for YES and (0) for NO -------------"<<endl;
    cin>>choice;
    if (choice==1){
    	b1.checkAvailabilty();
	}
	else if (choice == 0){
		cout<<"Thank You"<<endl;
	}
	else{
		cout<<"Invalid Option.........."<<endl;
	}


    return 0;
}

