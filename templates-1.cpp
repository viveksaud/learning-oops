/*
>The keyword template is used to define function template and class template
>It is a way to make your function or class generalize as far as data type is concern.
>Function template is also known as generic function
>syntax:
        template<class type> 
        type func_name(type arg1,type arg2,...);
*/
//function template(generic function) example:
#include<iostream>
#include<conio.h>
using namespace std;

// int maxx(int a, int b)//if there is only this function then output will be 3 and 7
// {
//     if(a>b)
//         return a;
//     else 
//         return b;
// }
// double maxx(double a,double b)//if there is both function then output will be 3 and 7.5
// {
// 	if(a>b)
//         return a;
//     else 
//         return b;
// }

//template1
template <class X>//with the use of template, by single definition of function  we can accomplish the task of all the overloaded function
//for same type of two data e.g. int int ,float float,etc
X maxx(X a, X b)
{
	if(a>b)
       return a;
   else 
       return b;
}
//template2
// template <class X, class Y>//for two different type of data e.g. int float , float double,etc
//if we didn't make different type class then for such data it will throw error
// X maxx(X a, Y b)
// {
// 	if(a>b)
//        return a;
//    else 
//        return b;
// }

int main()
{   
    cout<<maxx(2,3)<<endl;
    cout<<maxx(7.5,3.3)<<endl;
    // cout<<maxx(7,13.3)<<endl;//only for template2, for template 1 throws error


    getch();
    return 0;
}
