#include<iostream>
using namespace std;

class SingleTon{
	static int count;
	int *ptr;
	private:
	void getData(){	
		ptr = new int(20);
	}
	public:
	void callMethod(){		
		if(count==0){
			getData();
		} 
		count++;
	}
};

int SingleTon::count = 0;


int main(){
	SingleTon s,s1;
	s.callMethod();
	s1.callMethod();
	return 0;
}


