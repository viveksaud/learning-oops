/*
#array(array in C)(character array i.e.string in C)
>>Using null-terminated character(i.e. "\0"),arrays are not technically data types
>>So C++ operators cannot be applied to them
>>char s1[10],s2[20];

#string class(which is solution of above issue)
>>The string class is a specialization of a more general template class called basic_string
>>Since defining a class in C++ is creating a new data type, string is derived data type
>>This means opeators can be overloaded for the class

#why using string class instead of character array???
>>Many difficulties of character array are solved by string class e.g.operators cannot be to the string
>>Inside string class, there are so many variables,functions and operators , so thats why it provide so many facilities.
>>Thus, it is easy to handle and manipulate the string through string class rather than with traditional way i.e. with character array
>>But we can use anyone of these two technique. Each has their own importance.
>>If our priority is speed, then we can use char array. If our priority is less code,security,then we can use string class.


#string is safe than char array
>>Careless programmer can overrun the end of an array that holds a null terminated string.
>>e.g. using strcpy()
>>string class handles such issues
*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

main()
{
    char s1[20]="hello world";
    s1="friends";//wrong
    strcpy(s1,"friends");//correct way

    char s2[20];
    s2=s1;//wrong
    strcpy(s2,s1);//correct way

    s2>s1;//wrong
    int i=strcmp(s2,s1);//correct way

    char s3[50];
    s3=s1+s2;//wrong
    strcpy(s3,strcat(s1,s2));//correct way



    getch();
}