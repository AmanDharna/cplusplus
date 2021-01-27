#include<iostream>
using namespace std;
int a = 10;

int main(){
	int a = 20;
	cout<<"a is: "<<a<<endl;
	cout<<"a is: "<<::a<<endl;
	return 0;
}
