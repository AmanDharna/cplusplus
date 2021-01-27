#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream fp;
	int pos;
	char ch[200];
	fp.open("files/random.txt", ios :: out | ios :: ate);
	cout << "\nWriting to a file ... " << endl;
   	fp << "This is the first line." << endl;
   	fp << "This is the second line." << endl; 
	fp << "This is the third line." << endl; 
	pos = fp.tellp(); // Put put Pointer 
	cout<<"Current location: "<<pos<<endl;
	fp.seekp(-1, ios :: cur); // set put Pointer 
   	fp << endl << "Writing at a random location  ";
	fp.seekp(23, ios :: beg);
   	fp << " Hello World  ";
   	fp.close();
	fp.open("files/random.txt", ios :: in);
   	cout << "\nReading from the file ... " << endl;
	fp.seekg(0); // Initial set value at current position - get pointer 
	while (!fp.eof()) {
	      fp.getline(ch, 200);
	      cout << ch << endl;
   	}
	pos = fp.tellg(); // get location of get pointer
   	cout << "\nCurrent Position of get pointer : " << pos << endl;
	return 0;
}
