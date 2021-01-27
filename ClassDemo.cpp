#include<iostream>
using namespace std;

class Student{
	string name = "any value";
	public:
	void setName(string n){
		name = n;	
		getName();	
	}
	private:
	void getName(){
		cout<<"Name is: "<<name<<endl;
	}
};

int main(){
	Student s1;
	//s1.name = "pqr";
	s1.setName("ABC");
	//s1.getName();
	return 0;
}
