/*
TYPE Conversion
Complex c1;
c1.setData(3,4);
int x;
x=c1;//error

#class type to basic type
>>class type to basic type can be implemented with casting operator i.e.using casting operator overloading
>>syntax:
        operator basicType()
        {
            ...
            return(baiscTypeData);
        }
*/
#include<iostream>
#include<conio.h>
using namespace std;

class Complex{
    int a, b;
    public:
    void setData(int x, int y)
    {a=x;b=y;}
    void showData()
    {cout<<"\na="<<a<<" b="<<b;}
    operator int(){  //operator returnType_or_basicType(){
        return(a);
    }
};

main()
{
    Complex c1;
    c1.setData(3,4);
    c1.showData();
    int x;
    x=c1;//x = c1.operator int();
    cout<<"\nx="<<x;


    getch();
}