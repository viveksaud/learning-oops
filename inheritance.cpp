
//It is a process of inheriting properties and behaviours of existing class into a new class .
// existing class= old class= parent class=base class= super class
//new class = child class= derived class =sub class
// syntax:
class Base_Class
{
    ...
};
class Derived_Class: Visibility_Mode Base_Class
{
    ...
};
where, Visibility_Mode=Access specifier
e.g;
class Car
{

};
class SportsCar:public Car
{

};



#TYPES OF INHERITANCE
Single Inheritance
Multilevel Inheritance
Multiple Inheritance
Hierarchical Inheritance
Hybrid Inheritance

*SINGLE INHERITANCE
class A
{};
class B
{};

*MULTILEVEL INHERITANCE
class A
{};
class B:public A
{};
class C:public B
{};

*MULTIPLE INHERITANCE
class A1
{};
class A2
{};
class B:public A1,public A2
{};

*HIERARCHICAL INHERITANCE
class A
{};
class B1:public A
{};
class B2:pubic A
{};

*HYBRID INHERITANCE
mixture of two or more types of inheritance

#VISIBILITY MODES
*   Private 
    Protected
    Public
*Types of users of a class
-User 1 will create Object of your class i.e. access control
-User 2 will derived class from your class i.e. inheritance 
*Availability Vs Accessibility
    >>IN INHERITANCE, all member(i.e.private,protected,public) of parent class are available in child class.
    >>But all are not accessible.Following is the rule:-

    Base class               Derived class visibility
                  ------------------------------------
    visibility     :public          :private        :protected
    -------------------------------------------------------
    private         NOT inherited    NOT inherited   NOT inherited
    protected       protected        private         protected
    public          public           private         protected                   



    ACCESS          private protected   public
    -----------------------------------------
    same class      yes     yes         yes
    derived class   no      yes         yes
    outside class   no      no          yes










*/