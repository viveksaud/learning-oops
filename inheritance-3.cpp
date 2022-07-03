//We know that constructor is invoked implicitly when an object is created.
//In inheritance, when we create object of derived class, what will happen?
#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    public:
    A()
    {}

};
class B:public A
{
    public:
    B()
    {}

};

int main()
{
    B obj;
    getch();
    return 0;
}