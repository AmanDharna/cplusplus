#include<iostream>
#include<string.h>
using namespace std;

int main(){	
	char s1[100] = " welcome";
	char s2[100];
	char s3[100] = " to world";
	char s4[100] = "welcome";
	strcpy(s2,s1); // strcpy(destination,source); copy one string into another string
	cout<<"s1: "<<s1<<endl;
	cout<<"s2: "<<s2<<endl; 
	strcat(s1,s3); // string concatenation
	cout<<"s1: "<<s1<<endl;
	cout<<strstr(s1," ")<<endl; // substring

	if(strcmp(s2,s4) == 0){ // compare strings
		cout<<"equal"<<endl;
	} else {
		cout<<"not equal"<<endl;
	}

	cout<<"length: "<<strlen(s1)<<endl;
	return 0;
}
//strcpy
//strcat
//strcmp
//strstr
//strlen
