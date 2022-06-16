#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string str;
    ifstream infile;
    ofstream outfile;

    infile.open("File.txt",ios::app);
    while(infile)
    {
        getline(infile,str);
    }
    outfile.open("Copy.txt",ios::app);
    outfile<<str;
    outfile.close();
    infile.close();


}