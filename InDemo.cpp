#include<iostream>
using namespace std;

class A{
	public:
	A(){
		cout<<"A's Constructor"<<endl;
	}

	A(int a){
		cout<<"A's Parameterized Constructor"<<endl;
	}

	void show(){
		cout<<"Show-A"<<endl;
	}
};

class B : virtual public A{	
	public:
	B(){
		cout<<"B's Constructor"<<endl;
	}

	B(int b):A(b){
		cout<<"B's Parameterized Constructor"<<endl;
	}

	void show(){
		cout<<"Show-B"<<endl;
	}
};

class C : virtual public A{
	public:
	C(){
		cout<<"C's Constructor"<<endl;
	}

	C(int c) : A(c){
		cout<<"C's Parameterized Constructor"<<endl;
	}

	void show(){
		cout<<"Show-C"<<endl;
	}
};

class D : public B, public C{
	public:
	D(){
		cout<<"D's Constructor"<<endl;
	}

	D(int d) : B(d), C(d), A(d){
		cout<<"D's Parameterized Constructor"<<endl;
	}

	void show(){
		cout<<"Show-D"<<endl;
	}
};
	
int main(){
	D d;
	D d1(10);
	return 0;
}
