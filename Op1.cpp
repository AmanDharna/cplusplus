#include<iostream>
using namespace std;

class Point{
	int count,count1;
	int x,y;

	public:
	Point():count(0),count1(0),x(0),y(0){ }

	Point operator++(){ //syntax
		count++;
		cout<<"count is: "<<count<<endl;
	}

	Point operator++(int){ //syntax
		count1++;
		cout<<"count1 is: "<<count1<<endl;
	}

	void getData(int x,int y){
		this->x = x;
		this->y = y;
	}

	Point operator+(Point& obj){
		Point temp;
		temp.x = x+obj.x;
		temp.y = y+obj.y;
		return temp;
	}

	void show(){
		cout<<"x is: "<<x<<endl<<"y is: "<<y<<endl;
	}

};


int main(){
	Point p1,p2,p3;
	++p1;   //Prefix operator overloading
	p2++;	//Postfix operator overloading
	p1.getData(100,200);
	p2.getData(400,800);
	p3 = p1+p2; // p3 = p1.(p2);
	cout<<"p1"<<endl;
	p1.show();
	cout<<"p2"<<endl;
	p2.show();
	cout<<"p3"<<endl;
	p3.show();
	return 0;
}


