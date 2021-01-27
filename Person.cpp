#include<iostream>
using namespace std;

class Person{
	//Data Members
	private: 
	string name;
	int age;
	//Member Functions
	public:
	void setName(string n){
		name = n;
		string val = getName();
		val = "HELLO";
		cout<<"Val is : "<<val<<endl;
	}

	private:
	string getName(){
		name = "THIS";
		return name;
	}

	public:

	void setAge(int a){
		age = a;
	}

	int getAge(){
		return age;
	}
};

int main(){
	Person p;//Class Type Variable
	//p.name = "PQR"; //error
	p.setName("ABC");
	//cout<<"Name: "<<p.getName()<<endl;
	p.setAge(20);
	cout<<"Age: "<<p.getAge()<<endl;
	return 0;
}
