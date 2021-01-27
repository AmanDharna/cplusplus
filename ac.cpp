//Composition
#include<iostream>
using namespace std;

class A{
	int val;
	public:
	A(){ cout<<"Constructor-A"<<endl; }
	~A(){ cout<<"Destructor-A"<<endl; }

	void setData(int val){
		this->val = val;
	}

	int getData(){
		return val;
	}
};

class B{
	
	public:
	B(){ cout<<"Constructor-B"<<endl; }
	~B(){ cout<<"Destructor-B"<<endl; }
	
	A a;//Default constructor of A
};

int main(){
	B b; // Composition
	b.a.setData(10);
	cout<<"Val is: "<<b.a.getData()<<endl;
	return 0;
}
