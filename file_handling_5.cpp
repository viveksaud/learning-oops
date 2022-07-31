/*
modes:

*/
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("file1.txt",ios::ate|ios::app);

    cout<<fout.tellp();//hello world,total char-11,output-11 i.e.index is 11 (position is 12th)
    cout<<fout.tellp();
    cout<<fout.tellp();
    fout.seekp(2,ios_base::beg);
    cout<<"\n"<<fout.tellp();

    fout.close();
    getch();
    return 0;
}