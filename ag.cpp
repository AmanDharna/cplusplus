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
	int val;
	public:
	B(){ cout<<"Constructor-B"<<endl; }
	~B(){ cout<<"Destructor-B"<<endl; }
	
	void setData(int val){
		this->val = val;
		A *a = new A();//Default constructor of A
		a->setData(20);	
		cout<<"A's val is: "<<a->getData()<<endl;
	}

	int getData(){
		return val;
	}	
};

int main(){
	B b; // Aggregation
	b.setData(10);
	cout<<"Val is: "<<b.getData()<<endl;
	return 0;
}
