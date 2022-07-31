/*
>>"Throw" must be executed either within the "try" block or from any function called within the "try" block 
*/
#include<iostream>
#include<conio.h>
using namespace std;
void fun(){
    throw 10;
}
main()
{
    cout<<"Welcome";
    try{
        fun();
        cout<<"\n In Try";
    }
    catch(int e){
   cout<<"\n Exception no:"<<e;
    }
    cout<<"\n Last line";

    getch();
    //return 0;
}
