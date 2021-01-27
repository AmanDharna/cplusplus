#include<iostream>
using namespace std;

void fun(int a,int b=20){ // default arguments
	int c = a+b;
	cout<<"c is: "<<c<<endl;
}

int main(){
	fun(10,50);
	return 0;
}


