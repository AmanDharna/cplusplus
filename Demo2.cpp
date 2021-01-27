#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter a: "<<endl;
	cin>>a;
	cout<<"Enter b: "<<endl;
	cin>>b;
	if(a<b){ //if-else statement with block
		cout<<"a is smaller"<<endl;
		c = a+b;
		cout<<"Sum is: "<<c<<endl;	
	} else {
		cout<<"a is larger"<<endl;
		c = a-b;
		cout<<"Sbtraction is: "<<c<<endl;
	}
		
	return 0;	
}


