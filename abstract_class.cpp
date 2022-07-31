/*
# ABSTRACT CLASS:
    *A class containing pure virtual function(one or more) is an abstract class
     *We cannot instantiate abstract class
# PURE VIRTUAL FUNCTION:
    ->We cannot make the  object of that class(i.e here Person class) where there is pure virtual function.
    ->But for accessing members of that class (i.e Person class), we need to make its child class(i.e. Student class) and from their we can use members of Person class.
    ->In child class of Person class i.e. Student class, we must neccessarily do overriding of pure virtual function.
        ->But if we don't want overriding, then there is another option also and it is that we need to again make that function(i.e. here fun1()) pure virtual function.But now again we can't make object of this class also , if we want to use its member we need to again make its child class and inside there we need to define that funtion


#Why we make abstract class,pure virtual function???   
    Simply,we make pure virtual function to make abstract class.
    Another benefit of making pure virtual function is that function which is pure virutal function inside any class , then it will be force that its child class must contain definition of that function but there will be no meaning of that function in parent class.
    Pure virtual function is like hitting two target with a one arrow.One target is making abstract class and another target is forcing child class to contain definition of pure virtual function.


    

    And reason for making abstract class is illustrated with the example:
        ->Consider there is two classes STUDENT class and FACULTY class.
        -> Now, there will be some features which will be common to both classes(e.g. Name,Phone number,Address,etc)which is due to in general both student and faculty is a person.As we know generalization is key feature of OPP,so we have to make that super category as a class(i.e. person class).
        ->There might also be some specific features of each class (e.g. roll no. for student class and salary for faculty class)but those which are common we will keep them in another super class.
        ->what is its benefits then ? we will be able to easily maintain,modify,effort will be reduced, architecture will be maintained.

        ->Here we are not interested in making objects of PERSON class because object of student will represent student and object of faculty will represent faculty but object of person will represent to none,so what we will do with it, there is no use of it(i.e. what we will do with only name,roll no.,salary , address etc which will not represent to any student or faculty). We are only interested in objects of STUDENT and FACULTY class.

        ->Then why do we make that PERSON class because to provide common features to student and faculty.

        ->But object of person class should not be formed.So in such case, we make such class as a abstract class



*/

#include<iostream>
#include<conio.h>
using namespace std;

class Person
{
    public:
    virtual void fun1()=0;//pure virtual function
    void fun2(){}
};
class Student:public Person
{
    public:
    void fun1(){}
};

int main(){

    getch();
    return 0;
}