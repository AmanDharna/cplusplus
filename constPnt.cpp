#include<iostream>
using namespace std;
int main(){
	const int i = 0;
	const int *ptr = &i; // pointer to a constant;
	cout<<"i is: "<<i<<endl;
	//i = 10;
	//*ptr++;
	cout<<"ptr is: "<<++ptr<<endl;
	//cout<<"ptr is: "<<++*ptr<<endl;
	int * const ptr1 = &i;
	cout<<"ptr1 is: "<<++ptr1<<endl;
	return 0;
}
