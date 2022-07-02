//Overloading of insertion and extraction operator
#include<iostream>
#include<conio.h>
using namespace std;

class Complex
{
    private:
    int a,b;
    public:
    void setData(int x,int y)
    { a=x; b=y;}
    void showData()
    {cout<<"a="<<a<<" b="<<b<<endl;}
    friend ostream& operator <<(ostream&,Complex);
    friend istream& operator >>(istream&,Complex&);
};
ostream& operator <<(ostream &dout,Complex c)
{
    cout<<"a="<<c.a<<" b="<<c.b;
    return dout;//return cout;
}
istream& operator >>(istream &din,Complex &c)
{
    cin>>c.a>>c.b;
    return din;//return cin;
}
int main()
{
    Complex c1;
    cout<<"Enter a complex number:";
    cin>>c1;// cin.operator>>(c1);// cin is object while >> is member function of cout object's class
    cout<<"You enterd:";
    cout<<c1;// operator<<(cout,c1);
    getch();
    return 0;
}