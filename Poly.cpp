#include<iostream>
using namespace std;


class Shape{ // Abstract Class
	public:
	virtual void show(){
		cout<<"Shape"<<endl;
	}

	virtual void pureFunction() = 0; // Pure virtual function
};

void Shape::pureFunction(){
	cout<<"outside class"<<endl;
}

class Circle : public Shape{
	public:
	void show(){
		Shape::pureFunction();
		cout<<"Circle"<<endl;
	}

	void pureFunction(){
		cout<<"Pure in Circle"<<endl;
	}
};



class Rectangle : public Shape {
	public:
	void show(){
		cout<<"Rectangle"<<endl;
	}

	void pureFunction(){
		cout<<"Pure in rectangle"<<endl;
	}
};

int main(){
	//Shape s;
	Circle c;
	Rectangle r;
	Shape *a = &c; 
	a->show(); // Run time polymorphism / late binding
	c.pureFunction();
	a = &r;
	a->show();
	r.pureFunction();
	return 0;
}
