//Overloading of operator as a friend function
#include<iostream>
#include<conio.h>
using namespace std;

class Complex
{
    private:
    int a,b;
    public:
    void setData(int x, int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"\na="<<a<<" b="<<b<<endl;
    }
    // Complex operator +(Complex c)//using member function for operator overloading
    // {
    //     Complex temp;
    //     temp.a=a+c.a;
    //     temp.b=b+c.b;
    //     return temp;
    // }
    friend Complex operator +(Complex,Complex);//using friend function for operator overloading
};

Complex operator +(Complex C1,Complex C2)
{
    Complex temp;
    temp.a=C1.a+C2.a;
    temp.b=C1.b+C2.b;
    return temp;
}


int main(){
    Complex c1,c2,c3;
    c1.setData(20,30);
    c2.setData(50,80);

    c3=c1+c2;//in member function , we pass second object as argument while in friend function as their is no any caller oject so we pass both first and second ojbect as argument

    c1.showData();
    c2.showData();
    c3.showData();


    getch();
    return 0;
}