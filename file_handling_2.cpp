#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("file1.txt");

    char ch;
    // fin>>ch;
    // while(!fin.eof())// eof() returns 1 if eof is reached
    // {
    //     cout<<ch;
    //     fin>>ch;//">>" operator cannot read white space ,tab,etc as it takes them as a data separator// so output is 'helloworld' instead of 'hello world'.
    // }
    ch=fin.get();// to fix the issue inability of '>>' to read spaces, we use get() 
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
    }

    fin.close();


    getch();
    return 0;
}