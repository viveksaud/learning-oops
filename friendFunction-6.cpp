//Member function of one class can become friend to another class
#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    public:
    void fun()
    {}
    void foo()
    {}
    void soo()
    {}
    void doo()
    {}

};

class B
{
    //wrong wrong wrong!!!
    friend void fun();// this is wrong 

    //correct correct correct!!!
    friend void A::fun();// this is correct 
    //we have to use membership label to class A to say that it is member of class A elsewise it will not be clear that which function it is. e.g elsewise fun() might be friend function to class B as well. fun() might also be present in other class too. 
    friend void A::foo();
    friend void A::soo();
    friend void A::doo();

    //FRIEND CLASS
    //To make all the member function of one class friend to a another class
    friend class A;// we do make a friend class when we want all the member functions of class A as a friend to a class B

};
void fun()
{}

int main()
{
    system("cls");

    getch();
    return 0;
}