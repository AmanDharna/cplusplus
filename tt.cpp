#include<iostream>
using namespace std;
template <class T1,class T2>

class Point{
	T1 x;
	T2 y;
	public:
	void setData(T1 x,T2 y){
		this->x = x;
		this->y = y;
	}
	void display(){
		cout<<"x is: "<<x<<endl<<"y is: "<<y<<endl;
	}
};

int main(){
	Point<int,float> p1;
	p1.setData(10,20);
	p1.display();
	return 0;
}