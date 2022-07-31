#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i=4;
    //int i=2;
    // int i=3;
    // int i=4;
    // int i=5;
    cout<<"Welcome";
    try{
        if(i==1)
            throw 10;
        if(i==2)
            throw 20;
        if(i==3)
            throw 30.3333;
        if(i==4)
            throw "four";
        cout<<"\n In Try";
    }
    catch(double e){
    cout<<"\n Exception no:"<<e;
    }
    catch(int e){
    cout<<"\n Exception no:"<<e;
    }
    catch(...){
    cout<<"\n Exception no:";
    }
    //catch(...){}//accepts any type of exception
    cout<<"\n Last line";

    getch();
    return 0;
}