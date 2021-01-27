#include<iostream>
using namespace std;

class Point{
	int x,y,val,*ptr;
	public:
	Point():x(0),y(0){ }//Default Constructor //Initializer List
		//x=0;
		//y=0;
	
	Point(int x,int y){ //Parameterized Constructor
		this->x = x;
		this->y = y;
	}

	~Point(){
		//delete ptr;
		cout<<"Destructor called"<<endl;
	}

	Point(int val){
		this->val = val;
		ptr = new int(val); // Dynamic memory allocation - HEAP Memory
		cout<<"ptr is: "<<*ptr<<endl;
	}

	void show(){
		cout<<"x is: "<<x<<endl<<"y is: "<<y<<endl;
	}

	
};

int main(){
	Point p1;
	Point p2(10,20);
	Point p3(100);
	p1.show();
	p2.show();
	return 0;
}




