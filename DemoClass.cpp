//Compile time polymorphism - Function Overloading
#include<iostream>
using namespace std;

void fun(){
	cout<<"Fun1"<<endl;
}

void fun(int a){
	cout<<"a is: "<<a<<endl;
}

/*int fun(int b){
	cout<<"a is: "<<a<<endl;
}*/ 

void fun(int a, float b){
	int c;
	c = a+b;
	cout<<"c is: "<<c<<endl;
}

int main(){
	fun();
	fun(10);
	fun(70);
	fun(20,85.34);
	return 0;
}
