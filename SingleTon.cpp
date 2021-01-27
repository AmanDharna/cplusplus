#include<iostream>
using namespace std;

class A{
	int *a;
	static int count;
	public:
	A(){
		count++;
		if(count==1){
			a = new int(10);
			cout<<"a is: "<<*a<<endl<<"count is: "<<count<<endl;
		} else {
			cout<<"Singleton pattern so cannot create another object"<<endl;
		}
	}

	void show(){
		cout<<"Hello World"<<endl;
	}	
};

int A::count = 0;

int main(){
	cout<<"Object 1"<<endl;
	A a1;
	cout<<"Object 2"<<endl;
	A a2;
	
	return 0;
}
