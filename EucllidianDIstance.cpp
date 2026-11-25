#include<iostream>
#include<cmath>
using namespace std;

class Point{
	private:
		int x,y;

	public:
		void getData(){
			cout<<"Enter x and y coordinates: ";
			cin>>x>>y;
		}

		double operator-(Point p){
			return sqrt(pow(x-p.x,2)+pow(y-p.y,2));
		}
};

int main(){
	Point p1,p2;
	double distance;

	cout<<"Enter first point:\n";
	p1.getData();

	cout<<"\nEnter second point:\n";
	p2.getData();

	distance = p1-p2;

	cout<<"\nEuclidean Distance = "<<distance;

	return 0;
}