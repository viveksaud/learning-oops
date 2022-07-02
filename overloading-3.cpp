#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
	private:
		int a,b;
	public:
		void getData(int x,int y){
			a=x;
			b=y;
		}
		void showData(){
			cout<<"a="<<a<<" b="<<b<<endl;
		}
		complex operator -(){
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return temp;
		}
};

int main(){
	complex c1,c2;
	
	c1.getData(2,3);
	c1.showData();
	
	c2= -c1;//c1.operator-() here, no argument means it is unary operator =>c1- =>-c1
	c2.showData();
	
	getch();
	return 0;
}
