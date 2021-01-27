#include<iostream>
#include<fstream>
using namespace std;

int main() {
   char line[100];
   fstream ifile; // declaring an object of class ofstream
   ifile.open("file.txt",ios :: in); // open "file.txt" for writing data
   if (ifile.fail()) { // check if file is opened successfully
         // file opening failed
         cout<< "Error Opening file ... " << endl;
   } else {
      	while(!ifile.eof()){
      		 ifile.getline(line,100);
      		 cout<<line<<endl;
      	}	
}
   ifile.close(); // close the file
   return 0;
}
