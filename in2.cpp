#include<iostream>
using namespace std;


class A{
	public:
	A(){
		cout<<"Default Constructor - A"<<endl;
	}

	A(int a){
		cout<<"Parameterized Constructor - A"<<endl;
	}
};

class B : virtual public A{
	public:
	B(int b){
		cout<<"Parameterized Constructor - B"<<endl;
	}
};

int main(){
	//B b1;
	B b2(10);
	//A a1(28);
	return 0;
}
