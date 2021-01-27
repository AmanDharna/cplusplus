//<,>,<==,>==,== homework
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter a: "<<endl;
	cin>>a;
	cout<<"Enter b: "<<endl;
	cin>>b;
	if(a<b){ 
		cout<<"a is smaller"<<endl;
		c = a+b;
		cout<<"Sum is: "<<c<<endl;
		if(c>10){ //Nested if statement
			int d = 20,e;
			e = c+d;
			if(e<50)
				cout<<"e is smaller than 50";
			else
				cout<<"e is larger than 50";
		} else {	
			int d = 20,e;
			e = d - c;
			cout<<"Value of e: "<<e<<endl;
		}	
	} else {
		cout<<"a is larger"<<endl;
		c = a-b;
		cout<<"Sbtraction is: "<<c<<endl;
	}
	return 0;	
}


