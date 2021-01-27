#include<iostream>
using namespace std;

void fun(int a){
	cout<<"a is: "<<a<<endl;
}

/*int fun(int aa){
	cout<<"aa is: "<<aa<<endl;
	return aa;
}

void fun(int aa){
	cout<<"aa is: "<<aa<<endl;
	return aa;
}*/

void fun(int a,float b){
	cout<<"a is: "<<a<<endl<<"b is: "<<b<<endl;
}

int main(){
	fun(10);
	fun(20);
	fun(10,10.5);
	return 0;
}


