//Friend function can become friend to more than one class
#include<iostream>
#include<conio.h>
using namespace std;

class B;//we declared class B already here because we are using it in the class A before writing its definition which is throwing error

class A
{//friend function can be declared anywhere in the private as well as public 
    private:
    int a;
    public:
    friend void fun(A,B);
    void setData(int x){
        a=x;
    }
};
class B
{
    private:
    int b;
    public:
    friend void fun(A,B);
    void setData(int y){
        b=y;
    }
};

void fun(A o1, B o2)
{
    cout<<"sum is "<<o1.a+o2.b;
}

int main(){
    A obj1;
    B obj2;
    obj1.setData(10);
    obj2.setData(20);
    fun(obj1,obj2);

    getch();
    return 0;
}