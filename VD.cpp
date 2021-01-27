#include<iostream>
using namespace std;

class A{
	public:
	virtual void show(){
		cout<<"Show A"<<endl;
	}
	
};

class B : public A{
	public:	
	void show(){
		cout<<"Show B"<<endl;
	}
};

int main(){
	B b;
	A *a = &b;
	a->show();
	return 0;
}
