#include<iostream>
using namespace std;

void fun(int i){
	if(i<10){
		cout<<"Hello"<<endl;
		i++;
		fun(i);
	}
	
}

int main(){
	fun(0);
	return 0;
}
