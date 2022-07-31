//TYPE CONVERSION
//There are are four Combinations 
//basic to basic(there will automatic type conversion, there will be no error, we should not have to do anything )(*implicit( i.e. automatic) *explicit (i.e.type cast))
//basic to class
//class to basic
//class to class
//Basic type to user-defined type(i.e.class type)
//e.g c1=x;//complex type = int type
//***Basic type to class type can be implemented through constructor***
#include<iostream>
#include<conio.h>
using namespace std;

class Complex{
    private:
    int a, b;
    public:
    Complex(int k){//parameterized constructor//If parameterized constructor is made, then we should also make default constructor elsewise there will be a error. The compiler will not create default constructor itself,but will create itself if no any constructor is made by us.So let's make a default constructor
        a=k;
        b=0;
    }
    Complex(){//default constructor//will be created by compiler itself if no any constructor are made but if there is any, then we should compulsorily create default constructor by ourself.
    }
    void setData(int x, int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"\na="<<a<<" b="<<b;
    }
};

main(){
    Complex c1;
    int x=5;
    c1=x;//this will be like c1.Complex(x);//integer type is converted to complex type through constructor
    c1.showData();
    getch();
}
//constructor is called itself during creation of object
//secondly, constructor is also called during situation like above i.e. c1=x i.e.basic to class type