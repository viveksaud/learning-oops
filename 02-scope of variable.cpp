//local variable and global variable
#include<iostream>
using namespace std;

int g=1;//global variable
void func(){
    int a;
    cout<<g<<endl;// prints global variable i.e. searches whether g is local or not if not found local then uses global
}
int main(){
    int g=2;// local variable
    g=3;
    func();
    cout<<g<<endl;// prints local variable i.e local variable has higher precedence than global variable

    return 0;
}