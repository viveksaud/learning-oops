#include<iostream>
#include<conio.h>
//#include<stdlib.h>
using namespace std;

class Stu
{
    int id;
    char name[20];
    public:
    friend void operator >>(istream &inp,Stu &s)// in case of operator overloading we can declare and define friend function inside class but in general is declared inside and defined outside
    {
        cout<<"Enter Stu Id,Name:";
        inp>>s.id>>s.name;//cin is equivalent to inp
    }
    friend void operator <<(ostream &outp,Stu &s)
    {
        outp<<"Id="<<s.id<<" Name="<<s.name;

    }
};
// void operator >>(istream &inp,Stu &s)
// {}
int main()
{
    Stu s;

    system("cls");//use for clear screen in c++ //orsystem("clear");
    //clrscr();//dont work

    cin>>s;
    cout<<s;

    getch();
    return 0;
}
