#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream fp;
	int pos;
	char ch[100];
	fp.open("random.txt", ios :: out);
	cout << "\nWriting to a file ... ";
   	fp << "This is the first line."; 
	fp << "This is the third line."; 
	pos = fp.tellp();
	cout<<"Current location: "<<pos<<endl;
	fp.seekp(50);
	fp << "Hello World  \n";
	pos = fp.tellp();
	cout<<"Current location: "<<pos<<endl;
	fp.close();

	fp.open("files/random.txt", ios :: in);
   	//cout << "\nReading from the file ... " << endl;
	fp.seekg(0); 
	fp.getline(ch,100);
	cout<<ch;
   	pos = fp.tellg(); // get location of get pointer
   	cout << "\nCurrent Position of get pointer : " << pos << endl;
   	fp.close();
	return 0;
}
