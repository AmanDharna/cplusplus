#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str1[] = "hello ";
	char str2[50];
	char str3[50] = "world ";
	char str4[] = "hello ";
	strcpy(str2,str1); // string copy
	cout<<"str1 is: "<<str1<<endl;
	cout<<"str2 is: "<<str2<<endl;
	strcat(str2,str3); // string concatenation
	cout<<"str2 is: "<<str2<<endl;
	if(strcmp(str1,str4) == 0){ // string compare
		cout<<"equal"<<endl;
	} else {
		cout<<"not equal"<<endl;
	}
	cout<<"sub str is: "<<strstr(str2," ")<<endl;
	cout<<"Length of string: "<<strlen(str1)<<endl;
	return 0;
}
