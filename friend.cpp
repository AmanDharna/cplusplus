#include<iostream>
using namespace std;

class B;
class A{
	int a;
	public:
	A():a(10){}
	friend void getData(A,B);
	friend class B;
	void showB(B&);
};

class B{
	int b;
	public:
	B():b(20){}
	friend void getData(A,B);
	void getA(A);
	friend void A::showB(B& x);
};

void A::showB(B& x){
	cout<<"b is: "<<x.b<<endl;	
}

void getData(A obj1,B obj2){
	cout<<"a is: "<<obj1.a<<endl<<"b is: "<<obj2.b<<endl;
}

void B::getA(A obj){
	cout<<"a is: "<<obj.a<<endl;
}

int main(){
	A a;
	B b;
	getData(a,b);
	b.getA(a);
	a.showB(b);
	return 0;
}
