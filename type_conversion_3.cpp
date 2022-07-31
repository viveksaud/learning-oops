/*
class A{
    int a,b;
    ...
};
class B{
    int m,n;
    ...
};
void main(){
    A obj1;
    B obj2;
    obj2.setData(2,3);
    obj1=obj2;//error
}

#one class to another class
>>can be implemented with constructor(in the class which in LHS of "=" i.e. here in class A)
>>can be implemented with casting operator i.e.using casting operator overloading(in the class which in RHS of "=" i.e. here in class B)
>>syntax:
        operator basicType()
        {
            ...
            return(baiscTypeData);
        }
*/


//implementation using constructor
// #include<iostream>
// #include<conio.h>
// using namespace std;

// class B{
//     int m, n;
//     public:
//     void setData(int x, int y)
//     {m=x;n=y;}
//     void showData()
//     {cout<<"\na="<<m<<" b="<<n;}
//     int getM(){
//         return m;
//     }
//     int getN(){
//         return n;
//     }
// };
// class A{
//     int a, b;
//     public:
//     A(){
//     }
//     A(B k){
//         a=k.getM();//a=k.m; "m" and "n" are private member of another class so can't accessed directly , we will take help of member functions of that class to use them
//         b=k.getN();//b=k.n;
//     }
//     void showData()
//     {cout<<"\na="<<a<<" b="<<b;}
// };

// main()
// {
//     A o1;
//     B o2;
//     o2.setData(3,4);
//     o2.showData();
//     int x;
//     o1=o2;
//     o1.showData();


//     getch();
// }


// implementation using casting operator 
#include<iostream>
#include<conio.h>
using namespace std;

class A{
    int a, b;
    public:
    void showData()
    {cout<<"\na="<<a<<" b="<<b;}
    void set_a_b(int x,int y){
        a=x;
        b=y;
    }
};

class B{
    int m, n;
    public:
    void setData(int x, int y)
    {m=x;n=y;}
    void showData()
    {cout<<"\na="<<m<<" b="<<n;}
    operator A(){
        A temp;
        temp.set_a_b(m,n);
        return (temp);
    }
};

main()
{
    A o1;
    B o2;
    o2.setData(3,4);
    o2.showData();
    int x;
    o1=o2;
    o1.showData();


    getch();
}