#include<iostream>
using namespace std;

class A{ //abstract 
	public: 
	virtual void show() = 0; //pure virtual functions
};

void A::show(){
	cout<<"In show - outside"<<endl;
}

class B:public A{
	public:
	void showB(){
		cout<<"show-B"<<endl;
	}

	void show(){
		A::show();
		cout<<"In show"<<endl;
	}
};

int main(){
	A *a;
	B b;
	a = &b;
	
	b.show();
	return 0;
}