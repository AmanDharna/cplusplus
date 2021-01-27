#include<iostream>
#include<fstream>
using namespace std;

int main() {
   char line[100]; //character sequence
   fstream ifile; // declaring an object of class ofstream
   ifile.open("file.txt",ios :: out); // open "file.txt" for writing data
   if (ifile.fail()) { // check if file is opened successfully
      // file opening failed
      cout << "Error Opening file ... " << endl;
   }else {
      cout << "Enter a line : ";
      cin.getline(line, 100); 
      ifile << line << endl; // Append the line to the file
      cout << "Line written into the file" << endl;		
   }
   ifile.close(); // close the file
   return 0;
}
