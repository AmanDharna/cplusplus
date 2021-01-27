#include<iostream>
using namespace std;

void swap(int *x,int *y){ // Pass By reference
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	cout<<"After Swapping"<<endl<<"X is: "<<*x<<endl<<"Y is: "<<*y<<endl;
}

int main(){
	int a,b;
	cout<<"Enter A"<<endl;
	cin>>a;
	cout<<"Enter B"<<endl;
	cin>>b;
	swap(&a,&b); // Call by value
	cout<<"After Swapping"<<endl<<"A is: "<<a<<endl<<"B is: "<<b<<endl;
	return 0;
}

