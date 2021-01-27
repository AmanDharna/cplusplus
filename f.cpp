#include<iostream>
using namespace std;

class A{
	int a;
	public:

	A():a(10){ }

	friend void show(A&);
};

void show(A &objA){
	cout<<"a is : "<<objA.a<<endl;
}

int main(){
	A a1;
	show(a1);
	return 0;
}
