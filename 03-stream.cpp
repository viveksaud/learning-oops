#include<iostream>// setw(n) is not defined in iostream.
#include<conio.h>
#include <iomanip>//setw(n) is defined here.
using namespace std;

int main(){
    int a;

    cout<<"Enter input:\n";// << is insertion operator
    cin>>a;// >> is extraction operator

    cout<<"You entered:"<<a<<endl; // endl is manipulator
    cout<<"You entered:"<<setw(10)<<a;//setw is also manipulator which stands for set width.//setw C++ is a method of iomaip library present in C++. setw function is a C++ manipulator which stands for set width. The manipulator sets the ios library field width or specifies the minimum number of character positions a variable will consume. In simple terms, the setw C++ function helps set the field width used for output operations. The function takes member width as an argument and needs a stream where this field has to be manipulated or inserted.
    getch();
    return 0;
}