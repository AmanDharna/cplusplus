#include<iostream>
using namespace std; 
template <class T1,class T2>

class Point{
	T1 x;
	T2 y;
	public:
	void setData(T1 x,T2 y){
		this->x=x;
		this->y=y;
	}

	
	void show(){
		cout<<"x is: "<<x<<endl<<"y is: "<<y<<endl;
	}

	

};

int main(){
	Point<int,float> p2;
	p2.setData(356,20.76);
	p2.show();
	return 0;
}
	
