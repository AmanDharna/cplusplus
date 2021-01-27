#include<iostream>
using namespace std;

class B;
class A{
	int a;
	public:

	A():a(10){ }
	friend class B;
	
};

class B{
	int b;
	public:

	B():b(20){ }

	void show(A&);
};

void B::show(A &objA){
	cout<<"a is: "<<objA.a<<endl;
}

int main(){
	A a1;
	B b1;
	b1.show(a1);
	return 0;
}
