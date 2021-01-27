#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream o;
	o.open("filed.txt" , ios::app);
	o<<"any text again"<<endl;
	o<<"fourth line"<<endl;
	o.close();
	return 0;
}
