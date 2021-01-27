#include<iostream>
using namespace std;

class A{
 	public:
 	virtual void show() = 0; //pure virtual function
};

void A::show(){
		cout<<"In-A"<<endl;
}

class B:public A{
	public:
	void InB(){
		A::show();
		cout<<"In-B"<<endl;
	}
	
	void show(){
		
		cout<<"In-A-B"<<endl;
	}
	
};

int main(){
	B b1;
	b1.InB();
	return 0;
}
