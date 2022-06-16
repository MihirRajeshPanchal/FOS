#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string str;
    ofstream outfile;
    ifstream infile;

    cout<<"Enter String in File : ";
    getline(cin,str);
    outfile.open("File_Write.txt");
    outfile<<str;
    outfile.close();
}