#include<iostream>
using namespace std;

class Point{
	
	int x,y;

	public:
		void setData(int,int); // function declaration
		void getData();
};

void Point::setData(int x,int y){ //formar arguments
	this->x = x;
	this->y = y;
}

void Point::getData(){
	cout<<"x: "<<x<<endl<<"y: "<<y<<endl;
}

int main(){
	Point p1;
	int x,y;
	cout<<"Enter x: "<<x<<endl;
	cin>>x;
	cout<<"Enter y: "<<y<<endl
	cin>>y;
	p1.setData(x,y); //actual arguments
	p1.getData();
	return 0;
}