#include<iostream>
#include<conio.h>
using namespace std;

class integer
{
	private:
		int x;
	public:
		void setData(int a){
			x=a;
		}
		void showData(){
			cout<<"x="<<x<<endl;
		}
		//pre increment
		integer operator ++(){//no argument
			integer i;
			i.x= ++x;
			return i;
		}
		//post increment
		integer operator ++(int){//with argument
			integer i;
			i.x=x++;
			return i;
		}
};

int main(){
	integer i1,i2;
	
	cout<<"Before any increment"<<endl;
	i1.setData(3);
	i1.showData();
	
	cout<<"After pre increment"<<endl;
	i2=++i1;//pre increment
	i1.showData();
	i2.showData();
	
	cout<<"After post increment"<<endl;
	i2=i1++;//post increment
	i1.showData();
	i2.showData();
	
	getch();
	return 0;
}
