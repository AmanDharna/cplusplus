#include<iostream>
#include<fstream>
using namespace std;

// Define a class to store student data
class student {
   int roll;
   char name[30];
   float marks;
   public:
   student() { } // default const
   void getData(); // get student data from user
   void displayData(); // display data
};

void student :: getData() {
   cout << "\nEnter Roll No. : ";
   cin >> roll;
   cout << "Enter Name : ";
   cin>>name;
   cout << "Enter Marks : ";
   cin >> marks;
}

void student :: displayData() {
   cout << "\nRoll No. : " << roll << endl;
   cout << "Name : " << name << endl;
   cout << "Marks : " << marks << endl;
}

int main(){
	student st[4]; // array of objects
	fstream fst;
	/*fst.open("stdd.txt",ios::app|ios::out|ios::binary);
	cout<<"Enter student information......"<<endl;
	for(int i=0;i<4;i++){
		st[i].getData();
		fst.write((char *)(&st[i]), sizeof(st[i]));
	}
	cout<<"Data has been written......."<<endl;
	fst.close();*/


	fst.open("std.txt",ios::app|ios::in|ios::binary);
	cout<<"Display student information......"<<endl;
	for(int i=0;i<4;i++){

		cout<<fst.read((char *)(&st[i]), sizeof(st[i]));
		st[i].displayData();		
	}
	cout<<"Data has been displayed......."<<endl;
	fst.close();
	return 0;
}
