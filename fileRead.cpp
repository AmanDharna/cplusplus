#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char ch;
	ifstream ifObj;
	int count = 0;
	ifObj.open("students.txt");
	if(ifObj.fail()){
		cout<<"Error -- File does not exist"<<endl;
	} else {
		while(!ifObj.eof()){
			ifObj.get(ch);			
			if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
				count++;
			}			
		}
		cout<<ch<<endl<<"Total number of vowels: "<<count<<endl;		
	}
	ifObj.close();
	return 0;
}


