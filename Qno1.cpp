#include<iostream>
#include<iomanip>
using namespace std;
struct Details{
	char city[20];
	char dist[20];
	char prov[20];
	int popn;
};

int main(){
	cout<<"Lab no : 1 / Name : Punjan Pandey / Roll no : 95 / Section : C"<<endl;
	cout<<"==============================================================="<<endl;
	
	struct Details d[4] = {
		{"KATHMANDU", "Kathmandu", "Bagmati", 500000},
		{"Pokhara",   "Kaski",     "Gandaki", 50000},
		{"Butwal",    "Rupendehi", "Lumbini", 100000},
		{"Dharan",    "Sunsari",   "Prov 1",  80000}
	};
	
	int i ; 
	
	cout<<"\n\n";
	
	cout<<left<<setw(8)<<"S.No"
	<<setw(15)<<"City"
	<<setw(15)<<"District"
	<<setw(15)<<"Province"
	<<right<<setw(10)<<"Population"<<endl;
	
	for(i=0;i<4;i++){
		cout<<left<<setw(8)<<i+1
		<<setw(15)<<d[i].city
		<<setw(15)<<d[i].dist
		<<setw(15)<<d[i].prov
		<<right<<setw(10)<<d[i].popn<<endl;
		
	}
	
	
	return 0;
}