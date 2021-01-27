#include<iostream>
using namespace std;


class A{
	public:
	A(){
		cout<<"A's Const"<<endl;
	}

	A(int a){
		cout<<"A's Param Const"<<endl;
	}
};

class B : virtual public A{ // Single Level Inheritance
	
	public:
	B(){
		cout<<"B's Const"<<endl;
	}

	B(int b){
		cout<<"B's Param Const"<<endl;
	}
};

class C : virtual public A { 
	public:
	C(){
		cout<<"C's Const"<<endl;
	}
	
	C(int c){
		cout<<"C's Param Const"<<endl;
	}
};

class D : public B, public C{ //Multiple Inheritance
	public:
	D(){
		cout<<"D's Const"<<endl;
	}

	D(int d): B(d),C(d),A(d){
		cout<<"D's Param Const"<<endl;
	}
};

int main(){
	D d;
	D d1(20);
	return 0;
}
