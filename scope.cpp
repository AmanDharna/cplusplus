#include<iostream>
using namespace std;

class Person{
	string name;
	public:
	void setName(string);// declaration
	string getName();
};	

void Person::setName(string nn){

}

void Person::getName(){ //definition
	return name;
}

	
void Person::setName(string n){
	name = n;
	cout<<"name is:"<<name<<endl;
}

int main(){
	Person p;
	p.setName("ABC"); //calling
	return 0;
}
