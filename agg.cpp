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

	void setData(){
		A *a = new A();
		a->setData(30);
		cout<<"Data is: "<<a->getData()<<endl;
	}
	
};

int main(){
	B b;
	b.setData();
	return 0;
}

