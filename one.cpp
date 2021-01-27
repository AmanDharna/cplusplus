#include<iostream>
using namespace std; //standard

class A{
	public:
	void showA(){
		cout<<"Show-A"<<endl;
	}
	protected:
	void showApro(){
		cout<<"Show-A-Pro"<<endl;
	}
	private:
	void showApri(){
		cout<<"Show-A-Pri"<<endl;
	}
};

class B : public A{
	public:
	void showB(){
		showApro();

	}	
};

int main(){ 
	B b;
	b.showA();
	//b.showB();
	//b.showApri();
	b.showApro();
	return 0;
}
