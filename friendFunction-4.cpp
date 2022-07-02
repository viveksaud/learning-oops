//Overloading of unary operator as a friend function
#include<iostream>
#include<conio.h>
using namespace std;

class Complex
{
    private:
    int a,b;
    public:
    void setData(int x, int y)
    {a=x;b=y;}
    void showData()
    {cout<<"a="<<a<<" b="<<b<<endl;}
    // Complex operator -()//using member function
    // {
    //     Complex temp;
    //     temp.a=-a;
    //     temp.b=-b;
    //     return temp;
    // }
    friend Complex operator -(Complex);//using friend function

};

Complex operator -(Complex c)
{
    Complex temp;
    temp.a=-c.a;
    temp.b=-c.b;
    return temp;
}
int main()
{
    Complex c1,c2;
    c1.setData(30,80);
    c2=-c1;
    c1.showData();
    c2.showData();
    getch();
    return 0;
}