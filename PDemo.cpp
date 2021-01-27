#include<iostream>
using namespace std;

void fun(){
	const static int i = 0;
	const int *ptr = &i; 
	cout<<++ptr<<endl;
}

int main(){
	for(int i=0;i<5;i++){
		fun();
	}
	return 0;
}
