#include<iostream>
using namespace std;

namespace one{
	void show(){
		cout<<"In namespace one"<<endl;
	}
}

namespace two{
	void show(){
		cout<<"In namespace two"<<endl;
	}

	namespace three{
		void show(){
			cout<<"In namespace three"<<endl;
		}
	}
}


using namespace one;
using namespace two;
int main(){
	one::show();
	two::show();
	three::show();
	return 0;
}