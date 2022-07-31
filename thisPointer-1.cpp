//OBJECT POINTER
//A pointer contains address of an object is called Object pointer
#include<iostream>
#include<conio.h>
using namespace std;

class Box
{
    private:
    int l,b,h;
    public:
    void setDimension(int x,int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    void showDimension()
    {
        cout<<"l="<<l<<" b="<<b<<" h="<<h<<endl;
    }
};

int main()
{//we can access any object using its name or using a pointer which points to it.
    Box *p,smallBox;
    p= &smallBox;

    smallBox.setDimension(25,50,75);//to give value to the object using its name
    smallBox.showDimension();

    p->setDimension(25,50,75);//to give value to the object using the pointer which points to it.
    smallBox.showDimension();
    
    getch();
    return 0;
}
