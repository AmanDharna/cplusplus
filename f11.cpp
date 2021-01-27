#include<iostream>
#include<fstream>
using namespace std;

int main() {
   fstream fp;
   char buf[100];
   int pos;
   // open a file in write mode with 'ate' flag
   fp.open("random.txt", ios :: out | ios :: ate);
   cout << "\nWriting to a file ... " << endl;
   fp << "This is a line" << endl; // write a line to a file
   fp << "This is a another line" << endl; // write another file
   pos = fp.tellp();
   cout << "Current position of put pointer : " << pos << endl;
   
   return 0;
}

