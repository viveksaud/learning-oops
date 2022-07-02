//Friend Fnction is not a member function of a class to which it is a friend
//Friend function is declared in the class with friend keyword
//It must be defined outside the class to which it is frend

//Friend function can access any member of the class to which it is friend 
//Friend function cannot access members of the class directly
//It has no caller object
//It should not be defined with membership label

#include<iostream>
#include<conio.h>
using namespace std;

class Complex
{
    public:
    int a,b;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"\na="<<a<<"b"<<b;
    }
    friend void func(Complex);      
};

void func(Complex c)//dont use membership label//dont use friend keyword here
{
    // can use this cout<<"sum is "<<a+b; because we can't access directly member of class to which it is friend//directly not because we dont know which object's a,b it is and this is because we dont have caller object
    cout<<"sum is "<<c.a+c.b;

}

int main(){
    Complex c1;
    c1.setData(2,3);
//how to call a friend function//dont use c1.func();because it is not a member function 
    func(c1);
    getch();
    return 0;
}