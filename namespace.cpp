#include<iostream>
using namespace std;

namespace n1{
	void show(){
		cout<<"namespace one"<<endl;
	}
}

namespace n2{
	void show2(){
		cout<<"namespace two"<<endl;
	}

	namespace three{
		void show(){
			cout<<"N3"<<endl;
		}
	}
}

using namespace n1;
using namespace n2;
int main(){
	show();
	show2();
	return 0;
}
