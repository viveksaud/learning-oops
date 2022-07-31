/*
#catch
>>When an excepion is caught,arg will receive its value.
>>If you don't need access to the exception itself, specify only type in the "catch" clause ,arg is optional.
>>Any type of data can be caught, including classes that you create.
*/
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout<<"Welcome";
    try{
        throw ;//throwing no exception
        //program will abort by throwing error :Welcometerminate called without an active exception
        cout<<"\n In Try";
    }
    catch(int){//type of exception is compulsory but argument is optional//arg will receive value of exception
    //catch(...){// will receive any type of exception
   cout<<"\n Exception no:";
    }
    cout<<"\n Last line";

    getch();
    return 0;
}
