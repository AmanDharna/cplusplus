#include<iostream>
using namespace std;

class Shape{
	public:
	virtual void show(){
		cout<<"In-Shape"<<endl;
	}
};

class Circle : public Shape{
	public:
	void show(){
		cout<<"In-Circle"<<endl;
	}
};

class Rectangle : public Shape{
	public:
	void show(){
		cout<<"In-Rectangle"<<endl;
	}
};

int main(){
	Shape *a;
	Rectangle r;
	Circle c;
	a = &r;
	a->show();
	a = &c;
	a->show(); //run time polymorphism, late binding, dynamic binding
	return 0;
}