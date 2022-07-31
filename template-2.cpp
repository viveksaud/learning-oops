/*
>Class template is aslo known as generic class
>syntax:
        template<class placeholder_of_dataType>
        class class_name{...};
*/
//Class template example:
#include<iostream>
#include<conio.h>
using namespace std;

class ArrayList
{
    private:
    struct ControlBlock
    {
        int capacity;
        int *arr_ptr;
    };
    ControlBlock *s;

    public:
    ArrayList(int capacity)
    {
        s= new ControlBlock;
        s->capacity=capacity;
        s->arr_ptr=new int[s->capacity];
    }
    void addElement(int index,int data)
    {
        if(index >= 0 && index <= s->capacity-1)
            s->arr_ptr[index]=data;
        else
            cout<<"\nArray index is not value ";
    }
    void viewElement(int index,int &data)
    {
        if(index >= 0 && index <= s->capacity-1)
            data=s->arr_ptr[index];
        else
            cout<<"\nArray index is not valid";
    }
    void viewList()
    {
        int i;
        for(i=0;i<s->capacity;i++)
            cout<<" "<<s->arr_ptr[i];
    }

};

int main()
{
    int data;
    ArrayList list1(4);
    list1.addElement(0,32);
    list1.addElement(1,41);
    list1.addElement(2,55);
    list1.viewElement(0,data);
    list1.viewList();
    cout<<"\nValue in the array is "<<data;

    getch();
    return 0;
}