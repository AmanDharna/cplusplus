#include<iostream>
#include<exception>
using namespace std;

void division(int a, int b) {
	int val;
	if(b == 0){
		val = a/b;
		throw val;
	} else {
		cout<<"val is: "<<val<<endl;
	}
	
}

int main (){
 	int x = 50;
   	int y = 0;

	try{
		division(x,y);
	} catch(int msg) {
		cout<<"Exception is: "<<msg<<endl;
	}
	return 0;
}
