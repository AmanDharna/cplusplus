#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream i;
	string str;
	i.open("filed.txt");
	while(!i.eof()){
		getline(i,str);
		cout<<str<<"\n";
	}
	i.close();
	return 0;
}
