//Base class pointer can point to the object of any of its descendant class
//But its converse is not true
#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    public:
    void f1(){ cout<<"function of A class i.e. parent class \n";}
};
class B:public A
{
    public:
    void f1(){ cout<<"function of B class i.e. base class \n";}//function overriding
};

int main()
{
    A *p,o1;
    B o2;
    p=&o2;
    
    o2.f1();//B//By watching f1() call, compiler tries to find the correct definition of f1() and bind with it.For this, compiler checks the type of o2, which is B, so control goes to B class ,finds the f1(),and gets there f1() and binds definition of f1() present at B class with calling function//so thats why in the case of function orverriding ,the child class one only always used to get run // this is early binding

    p->f1();//A//in the case when we call f1() using pointer then also there will be early binding//But the problem with it is that compiler will not know whose address is contained in pointer ,so to find the correct version of f1() compiler will not know whether the pointer p contains the address of o1 or o2 during compilation time because it will only know during runtime when memory will be allocated.Thus, during compile time ,compiler will only know the type of pointer because its type was decided during its declaration.At declaration,the type of pointer was A //so during early binding ,compiler will only watch the type of pointer not about its content//since the type of pointer is A, so control will go to A class and searches the f1() function and if found then bind with it.//which is an issue of overriding, our aim is to access child class one function definition.(which is the purpose of using function overriding but here it is no meaning of using of it )

    // The solution of this problem is to avoid the early binding i.e. there must be a late binding(i.e. runtime binding or dynamic binding).To tell the compiler to do a late binding, we use the virtual keyword before the function whose binding we want to have late.//now during call ,compiler will check  on the basis of content of  pointer rather than its type//since pointer is pointing  the object of child , so f1() function of object of child will run.//After solution,i.e after applying virtual keyword infront, we see running B class f1()function.//CHEKOUT THE OUTPUT AFTER APPLIYING virtual KEYWORD INFRONT OF f1()function!!!
    getch();
    return 0;
}
//early binding:
//              The binding of correct version(correct definition) of calling function done by compiler by watching calling function is called early binding.  
//late binding(dynamic binding or runtime binding ):
//              The binding 