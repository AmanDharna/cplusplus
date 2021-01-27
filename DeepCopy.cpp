#include<iostream>
using namespace std;

class Point{
	int x;
	int * y;
	public:
	Point():x(0),y(0) { }

	void setPoint(){
		x = 10;
		y = new int(20);
	}

	void show(){
		cout<<"x: "<<x<<endl<<"y: "<<*y<<endl;
	}

	Point(const Point &obj){
		x = obj.x;
		//obj.x = 100;
		int z = *(obj.y);
		z = 200;
		y = new int(z);
	}

	~Point(){
		delete y;
	}



	/*Point(const Point &obj){
		x = obj.x;
		y = obj.y;
		cout<<"Copy constructor called"<<endl;
	}*/

	/*Point operator=(Point &obj){
		obj.x = 100;
		//obj.y = 200;
		x = obj.x;
		//y = obj.y;
		cout<<"Assigment Constructor called"<<endl;
	}*/

};

int main(){
	Point p1,p2;
	p1.setPoint();
	//p2 = p1; // Assignment Constructor
	Point p3 = p1; //copy constructor call
	cout<<"p1"<<endl;
	p1.show();
	//cout<<"p2"<<endl;
	//p2.show();
	cout<<"p3"<<endl;
	p3.show();
	return 0;
}
