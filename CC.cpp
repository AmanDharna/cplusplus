#include<iostream>
using namespace std;


class CopyDemo{
	int x;
	int* y;

	public:
	CopyDemo():x(0),y(0){ }

	void setPoint(){
		x = 10;
		y = new int(100);
	}
	
	void show(){
		cout<<"x is: "<<x<<endl;
	}

	/*CopyDemo(const CopyDemo &c){
		x = c.x;
		//c.x = 200;
		//x = c.x;
		cout<<"copy constructor called"<<a<<endl;
	}*/

	CopyDemo operator=(const CopyDemo &c){
		cout<<"Assignment Operator called"<<endl;
	}

	CopyDemo(CopyDemo &c){
		x = c.x;
		int z = *(c.y);
		*c.y = 100;
		z = *(c.y);
		y = new int(z);
	}	

	void unSet(){

	}
	
};

int main(){
	CopyDemo c1,c3;
	c1.setPoint();
	c3 = c1; //assignment constructor
	CopyDemo c2 = c1;
	cout<<"c1"<<endl;
	c1.show();
	//c2 = c1;
	cout<<"c2"<<endl;
	c2.show();
	cout<<"c3"<<endl;
	c3.show();
	return 0;
}
