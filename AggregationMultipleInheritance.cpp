//: Implement aggregation & multiple inheritance: derive class book (title, price) from base classes author (name, qualification) and 
//publication (pname), with getdata() and putdata() methods

#include<iostream>
#include<cstring>

using namespace std;

class Author{
	protected:
		string name, qualification;

	public:
		void getdata(){
			cout<<"Enter Author Name: ";
			getline(cin,name);

			cout<<"Enter Qualification: ";
			getline(cin,qualification);
		}

		void putdata(){
			cout<<"\nAuthor Name: "<<name;
			cout<<"\nQualification: "<<qualification;
		}
};

class Publication{
	protected:
		string pname;

	public:
		void getdata(){
			cout<<"Enter Publication Name: ";
			getline(cin,pname);
		}

		void putdata(){
			cout<<"\nPublication Name: "<<pname;
		}
};


class Book:public Author , public Publication{
	private:
		string title;
		float price;
	public:
		void getdata(){
			Author::getdata();
			Publication::getdata();

			cout<<"Enter Book Title: ";
			getline(cin,title);

			cout<<"Enter Price: ";
			cin>>price;
		}
		void putdata(){
			Author::putdata();
			Publication::putdata();

			cout<<"\nBook Title: "<<title;
			cout<<"\nPrice: "<<price;
		}
};

int main(){
	Book b;

	b.getdata();

	cout<<"\n\n--- Book Details ---";
	b.putdata();

	return 0;
}