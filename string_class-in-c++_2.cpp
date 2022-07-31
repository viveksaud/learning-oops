/*
#string is in STL
>>string is an another contaner class
>>to use string class, you have to include string header
        #include<string>


#Constructors
>>string class supports many constructor, some of them are 
        ---string()
        ---string(const char *str)
        ---string(const string &str)

#operators
>> assignment                =
>> concatenation             +
>> concatenation assignment  +=
>> equality                  ==
>> inequality                !=
>> less than                 <
>> less than or equal        <=
>> greater than              >
>> greater than or equal     >=
>> subscripting              []
*/
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

main()
{
    //
    // string s1="hello world";//we didn't have to make any array, we can directly assign that string to s1 and we can also perform any operation directly

    //Constructors
    //---string()
    string s1;
    // string s2="hello";//or string s2("hello");//or string s2= string("hello");

    //---string(const char *str)//creating a string class object and passing char type array pointer i.e. passing address of string
    char str[]="hello";
    string s2=str;//or string s2(str); //We know that if we are assigning (to any object) at the time of creating any object of any class then that assigned one will be the argument for the constructor of class of that object,so "str" is an argument.

    //---string(const char &str)//creating a string's object and passing reference of another object of string class
    string s3=s2;//or s3(s2);//passing reference of s2(while passing reference we only use name if formal argument was reference variable)(while passing address we use &name if formal agrument was pointer)




    //operator
    //e.g. assignment operator i.e. =
    string s5;
    s1="hello";//now constructor will not run , it will be only during assignment while creating object. Here,first s5 object is created, later in next statement then assigned, so now assignment operator will be called.

    //e.g. concatenation i.e. +
    string s6="students";
    string s7;
    s7=s5+s6;
    //e.g. concatenation assignment i.e. +=
    s7+=s6;//or s7=s7+s6;




    getch();
}