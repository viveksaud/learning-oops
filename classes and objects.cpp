#include<iostream>
#include<conio.h>
using namespace std;

class complex{
	private:
		int a,b;
	public:
		void setdata(int x, int y){
			a=x;
			b=y;
		}
		void showdata(){
			cout<<a<<"+"<<b<<"i"<<endl;
		}
		complex add(complex c){ //defination of member function inside class
			complex temp;
			temp.a = a + c.a;
			temp.b = b + c.b;
			return temp;
		}
		//complex add(complex); //defination of member function outside class 
};

//complex complex::add(complex c){
//	complex temp;
//	temp.a = a + c.a;
//	temp.b = b + c.b;
//	return c;
//}

int main(){
	complex c1,c2,c3;
	c1.setdata(2,3);
	c2.setdata(4,5);
	c1.showdata();
	c2.showdata();
	c3=c1.add(c2);
	cout<<"Sum of complex number c1 and c2: ";
	c3.showdata();
	getch();
}
