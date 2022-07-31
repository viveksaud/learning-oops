//THIS POINTER
/*
*this is a keyword
*this is a pointer variable(class type object pointer like a float,int,char,.. type pointer variable)
* this is a local object pointer in every instance member function containing address of the caller object.(only a instance member function not a static member function)
* this pointer can not be modify
* It is used to refer caller object in member function 
*/

#include<iostream>
#include<conio.h>
using namespace std;

class Box
{//local variable:variable inside function
//instance member variable:variable inside object
    private:
    int l,b,h;//instance member variable
    public:
    void setDimension(int l,int b,int h)//(int x,int y,int z)//making the  name of  local variable and  instance varible same.
    //now there will be confusing which is what
    {
        // l=x;//x,y,z are function variable/local variable
        // b=y;//precedence of variable which is more local is high 
        // h=z;

        // l=l;
        // b=b;//name conflict, both side containing local variable
        // h=h;

        this->l=l;//here,this represent calling object so now it is clear that left side l belongs to calling object and  is instance variable
        this->b=b;//now no name conflict
        this->h=h;

    }
    void showDimension()
    {
        cout<<"l="<<l<<" b="<<b<<" h="<<h<<endl;
    }
};

int main()
{
    Box smallBox;

    smallBox.setDimension(3,6,9);
    smallBox.showDimension();

    getch();
    return 0;
}