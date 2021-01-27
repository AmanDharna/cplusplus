//Composition
#include<iostream>
using namespace std;

class A{
	public:
	A(){ cout<<"Constructor-A"<<endl; }
	~A(){ cout<<"Destructor-A"<<endl; }
};

class B{
	public:
	B(){ cout<<"Constructor-B"<<endl; }
	~B(){ cout<<"Destructor-B"<<endl; }

	private:
	A a;//Default constructor of A
};

int main(){
	B b; // Composition
	return 0;
}
