#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream of;
	of.open("files/test.txt");
	of<<"This is our first file"<<endl;
	of<<"This is second line"<<endl;
	of.close();
}
