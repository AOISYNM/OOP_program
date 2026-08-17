#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    int sid;
    char sname[20];
    int level;

    void getdata()
    {
        cout << "Enter id, name, level: ";
        cin >> sid >> sname >> level;
    }
    void show()
    {
        cout << sid << " " << sname << " " << level << endl;
    }
};

int main()
{
    cout<<"Lab no : 28 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
	Student s;
    s.getdata();

    ofstream fout("student.dat", ios::binary);
    fout.write((char*)&s, sizeof(s));
    fout.close();

    Student s2;
    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    cout << "Data read from file:\n";
    s2.show();

    return 0;
}