#include<iostream>
using namespace std;

class A{
	public:
	A(){
		cout<<"In-A"<<endl;
	}
};

class B : virtual public A{
	public:
	//A::A();
	B(){
		cout<<"In-B"<<endl;
	}
};

class C : virtual public A{
	public:
	//A::A();
	C(){
		cout<<"In-C"<<endl;
	}
};

class D : public C,public B{
	public:
	/*A::A();
	B::B();
	A::A();
	C::C();*/
	D(){
		cout<<"In-D"<<endl;
	}
};

int main(){
	D d;
	return 0;
}