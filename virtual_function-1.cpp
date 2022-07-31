//why do we use virtual function?
//Because to access overridden function in derived class using base pointer pointing derived object
//else we will be able to access only member functions of base class
//*note: we will not be able to access other members of derived class using base pointer pointing derived object except publicly inherited members from base class
#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
    public:
    void print()
    {cout<<"Base class print \n";}
     virtual void show()
     {cout<<"Base class show \n";}
};
class Derived:public Base
{
    public:
    void print()
    {cout<<"Derived class print\n";}
    void show()
    {cout<<"Derived class show\n";}
};

int main()
{
    Base *bptr,bobj;
    Derived dobj;

    bptr=&bobj;//base pointer pointing base object
    bptr->print();//base
    bptr->show();//base

    bptr=&dobj;//base pointer pointing derived object
    bptr->print();//non virtual function//base
    bptr->show();//virtual function//derived

    getch();
    return 0;
}