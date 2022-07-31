#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout<<"Welcome";
    try{
        throw 10;
        cout<<"\n In Try";
    }
    //Throwing integer type exception but caughting that exception with different type will throw an error
    // catch(double e){//Welcometerminate called after throwing an instance of 'int'
    catch(...){// will receive any type of exception
    cout<<"\n Exception no:";
    }
   
    cout<<"\n Last line";

    getch();
    return 0;
}