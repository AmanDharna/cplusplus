#include<iostream>
using namespace std;
// Constants
// Pointer to a constant
// Constant Pointer
// Constant Pointer pointing to a constant
int main(){
	const int i = 10;
	const int *ptr = &i;
	cout<<"*ptr is: "<<++ptr<<endl;
	int a = 10;
	int * const ptr1 = &i;
	cout<<"ptr1 : "<<++*ptr1<<endl;
	const int * const ptr1 = &i;
	return 0;
}


