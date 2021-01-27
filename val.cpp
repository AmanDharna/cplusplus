#include<iostream>
using namespace std;

int a = 10;
int main(){	
	int a = 20;
	cout<<"a is: "<<a<<endl;
	cout<<"Global a is: "<<::a<<endl; // Scope resolution operator
	return 0;
}

