#include<iostream>
#include<conio.h>
using namespace std;

class Test
{
    private:
    //int a=10,b=20;  //we directly initializing the value of data member, this concept is not allowed in c++.//In C++, data member(especially private data) should be initialized through the member functions of same class which is calld data hiding concept

    //Then how to initialize them???
    int a,b;
};

int main(void)
{
    Test t={10,20};//Again this will give error because a and b are private members and private members are not initialized directly , they should be initialized through the member function.
    getch();
    return 0;
}
