/*

#Exception
>>Exception is any abnormal behaviour, run time error
>>Exceptions are off beat situation in your program where your program shoudl be ready to handle it with appropriate response.

#Exception Handling
>>C++ provides a built-in error handling mechanism that is called exception handling
>>Using exception handling, you can more easily manage and respond to runtime errors.

#try,catch,throw
>>Program statements that you want to monitor for exceptions are contained in a "try" block.
>>If any exception occurs within the try block, it is thrown (using "throw").
>>The exception is caught using "catch", and processed.
>>syntax:
        try{
        }
        catch(type1 arg){ 
        }
        catch(type2 arg){
        }
        ...
        catch(typeN arg){ 
        }

        *note:
             i)catch construct shoud come immediately after try construct
            ii)there can be any numbers of catch construct but there should not be any other code between catch construct rather they should be in sequence

*/
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
    catch(int e){
   cout<<"\n Exception no:"<<e;
    }
    cout<<"\n Last line";

    getch();
    return 0;
}

/*

#"try" and "catch" are complementary to each other(i.e.are in pair) . "Throw" can be alone but after throw statement is executed, program will abort automatically.
e.g.of using throw alone(Welcometerminate called after throwing an instance of 'int')

#catch
>>When an excepion is caught,arg will receive its value.
>>If you don't need access to the exception itself, specify only type in the "catch" clause ,arg is optional.
>>Any type of data can be caught, including classes that you create.

#throw
>>The general form of the "throw" statement is:
                                throw exception;
>>"Throw" must be executed either within the "try" block or from any function called within the "try" block 

*/