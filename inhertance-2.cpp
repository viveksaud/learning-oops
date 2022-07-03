/*
#Is-a relationship
    *Banana is a fruit
    *Rectangle is a quadrilateral
    *Association
        -Aggregation
        -Composition
        -Inheritance (our discussion)
            >table is a furniture
            >two wheeler is a vehicle
            >student is a person
            >car is an engine or engine is a car(In case of car and engine, there is no IS-A relationship)(But it has HAS-A relationship because Car has an engine.)(But here we only focus on IS-A relationship)
    *category(i.e.General one) will be parent class and sub category(i.e. specific one) will be child class

#Is-a relationship is always implemented as a public inheritance.(why?)
        >>>Because if implemented public then only Parent class's public member will become PUBLIC in child class and then only object of child class can become able to access that public member of parent class  (elsewise it will become private or protected in child class and then child class object cannot become able to access member of parent class)
#When to use private and protected inheritance?
*/

/*
// when to use public inheritance
#include<iostream>
#include<conio.h>
using namespace std;

class Car
{
    private:
    int gear;
    public:
    void increamentGear()
    {
        if(gear<5)
            gear++;
    }
};
class SportsCar:public Car
{
    // #Is-a relationship is always implemented as a public inheritance.(why?)
    //     >>>Because if implemented public then only Parent class's public member will become PUBLIC in child class and then only object of child class can become able to access that public member of parent class  (elsewise it will become private or protected in child class and then child class object cannot become able to access member of parent class)

};

int main()
{
    getch();
    return 0;
}
*/


// when to use private inheritance
//stack is a array or array is a stack(it is not IS-A relationship)(STACK is implemented as an Array)
#include<iostream>
#include<conio.h>
using namespace std;

class Array
{
    private:
    int a[10];
    public:
    void insert(int index,int value)
    {
        a[index]=value;
    }
};
class STACK:public Array// to fix issue we have to do---> class STACK:private Array
{
    private:
    int top;
    public:
    void push(int value)
    {
        insert(top,value);
    }
};

int main()
{
    STACK s1;
    s1.push(18);
    s1.insert(3,21);//stack is like a vertical array, wherer firstly value is placed in index 0,and then index 1, then index 2 and so on.
    //But here in this case after placing value 18 in index 0, it is directly placing the value 21 in index 3 which violates the definition of stack.
    //In order to fix this issue we should do private or protected inheritance and then only object of stack can't become able to access insert function.
    getch();
    return 0;
}
