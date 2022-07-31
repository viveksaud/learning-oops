//method overriding:
//        functions having same name and same prototype but different work(i.e.different code i.e.different implementation) in parent and child class
//method hiding:
//        functions having same name but different argument in parent and child class
//method overloading:
//        functions having same name but different argument in same class
#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    public:
    void fun1(){}
    void fun2(){}
};
class B:public A
{
    public:
    void fun1(){}//method overriding 
    void fun2(int x){}//method hiding
};

int main()
{
    B obj;

    obj.fun1();//fun1 of B

    //if name of function was not matched in child class then it will search in parent class
    //but here it is matched so it will not go in parent class
    //and function name is matched but argument didn't so compiler will throw error
    obj.fun2();//error
    obj.fun2(56);//fun2 of B

    //in case when two function just above ran correctly then we could 
    //say that it is method overloading since in same class there are functions having same name but different arguments 
    
    getch();
    return 0;
}