//private can't be inherited
//protected can be inherited
//private and protected both can't be accessed outside their class
#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    private:
        int a;
    protected:
        void setValue(int k)
        {a=k;}
};
class B:public A
{
    public:
        void setData(int x)
        {
            //a=x;//here private member of A is inaccessible
            setValue(x);//here protected member of A (i.e.setValue(k)) is accessible

        }
};

int main()
{
    B obj;
    // obj.setValue(4); //here protected member of A  is inaccessible
    obj.setData(4);

    getch();
    return 0;
}
/*
    ACCESS          private protected   public
    -----------------------------------------
    same class      yes     yes         yes
    derived class   no      yes         yes
    outside class   no      no          yes

*/

