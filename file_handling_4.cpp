/*


*/
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("file1.txt");
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get();
    cout<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    fin.seekg(0);
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    fin.seekg(6);
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();

    fin.seekg(2,ios_base::cur);//from current position to 2 step forward
    cout<<"\n"<<fin.tellg();
    cout<<(char)fin.get();
    fin.seekg(-2,ios_base::cur);//from current position to 2 step backward
    cout<<"\n"<<fin.tellg();
    cout<<(char)fin.get();
    fin.seekg(2,ios_base::beg);//from beginning to 2 step forward
    cout<<"\n"<<fin.tellg();
    cout<<(char)fin.get();
    fin.seekg(-2,ios_base::end);//from end to 2 step backward
    cout<<"\n"<<fin.tellg();
    cout<<(char)fin.get();
    


    getch();
    return 0;
}