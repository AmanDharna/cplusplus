#include<iostream>
using namespace std;

void swap(int &x,int &y){ //Pass by reference
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout<<"After Swap"<<endl<<"X is: "<<x<<endl<<"Y is: "<<y<<endl;
}


int main(){
	int a,b;
	cout<<"Enter A: "<<endl;
	cin>>a;
	cout<<"Enter B: "<<endl;
	cin>>b;
	swap(a,b); // Call by value
	cout<<"After Swap"<<endl;
	cout<<"A is: "<<a<<endl<<"B is: "<<b<<endl;
	return 0;
}
