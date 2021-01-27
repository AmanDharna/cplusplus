#include<iostream>
using namespace std;

class StaticDemo{
	int a;
	static int count;
	public:
	void setData(int);
	void setCount();
	int getCount();
	static void Inc(int);
};	

int StaticDemo::count = 10;

void StaticDemo::Inc(int vals){
	a = vals;
	count++;
	cout<<"Count is: "<<count<<"a is: "<<a<<endl;
}

void StaticDemo::setData(int aa){
	a = aa;
	cout<<"a is: "<<a<<endl;
}

void StaticDemo::setCount(){
	//count = val;
	count++;
}

int StaticDemo::getCount(){ //definition
	return count;
}


int main(){
	StaticDemo s1,s2,s3;
	//s1.Inc();
	//s2.Inc();
	//s3.Inc();
	StaticDemo::Inc(200);
	//StaticDemo::Inc();
	//StaticDemo::Inc();
	//StaticDemo::getCount();
	s1.setData(100);

	/*StaticDemo s1,s2,s3;
	s1.setCount();
	cout<<"Count is: "<<s1.getCount()<<endl;
	s2.setCount();
	cout<<"Count is: "<<s2.getCount()<<endl;
	s3.setCount();
	cout<<"Count is: "<<s3.getCount()<<endl;
	s1.setCount();
	cout<<"Count is: "<<s1.getCount()<<endl;
	s2.setCount();
	cout<<"Count is: "<<s2.getCount()<<endl;
	s3.setCount();
	cout<<"Count is: "<<s3.getCount()<<endl;*/
	return 0;
}
