#include<iostream>
using namespace std;

class B;
class C;
class A{
	int a;
	public:

	A():a(10){ }
	void showB(B&);
	
};

class C{
	int c;
	public:

	C():c(30){ }
	void showB(B&);
	
};

class B{
	int b;
	public:

	B():b(20){ }
	friend void A::showB(B&);
	friend void C::showB(B&);
};



void A::showB(B &objB){
	cout<<"b is: "<<objB.b<<endl;
}

void C::showB(B &objB){
	cout<<"b is: "<<objB.b<<endl;
}

int main(){
	A a1;
	B b1;
	C c1;
	a1.showB(b1);
	c1.showB(b1);	
	return 0;
}
