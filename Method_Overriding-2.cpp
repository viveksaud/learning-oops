//when to use method overriding(when????)
//In inheritance ,in child class when we want to modify i.e.change i.e.update i.e.implement differently  any service provided by the parent class then we use method overriding
//in method overriding , always only child class functionality will run
#include<iostream>
#include<conio.h>
using namespace std;

class car
{
    public:
    void changeGear(){cout<<"conventional way of changing gear";}//conventional way of changing gear
};
class sportsCar:public car
{
    public:
    void changeGearAdvance(){cout<<"advance way applied with different function name";}//advance way with different function name

    //so to fix issue ,we need method overriding
    void changeGear(){cout<<"advance way applied with method overriding";}//different implementation i.e different code i.e. different work i.e. here in this case advance way of changing gear with same function name
};

int main()
{
    sportsCar sc;
    
    //sc.changeGear();//before creating changeGearAdvance//car//didn't found in child and went to search in parent and found and run that

    //obj.changeGearAdvance();//sports car

    //in reality car can change the gear in only one way but here we have two way(i.e two functions changeGearAdvance and changeGear)
    //the object of sportsCar, don't want the older way ,it want the advance way of changing gear 
    //here object of sportCar is being able to call both old and advance one but in reality can run with only one way and want to run advance one 
    //So to be able that the object of sportsCar run with advance way and oject of car run with old way, we use the method overriding(i.e.same function name but differnt implementation in parent and child class)
    //In sum up, if we create different name function then we will be able to run parent class function as well as child class funtion
    //but we don't want to run parent class functionality and we knowingly want to run child class functionality only
    sc.changeGear();//sports car//now goes to only child class 

    getch();
    return 0;
}