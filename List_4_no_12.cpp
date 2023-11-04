#include<iostream>
using namespace std;
class demo
{
	int x,y;
	public :
		demo(int l,int b)
		{
			x=l;
			y=b;
      cout<<"220130318016";
      cout<<"Vasu Sapariya";
			cout<<"Parameterized Constructor Called ::"<<endl;
			cout<<"Area of Rectangle is ::"<<l*b<<endl;

		}
		
		demo(demo &n)
		{
			x=n.x;
			y=n.y;
			
			cout<<"Copy Constructor Called ::"<<endl;
		}
};
int main()
{
	demo d1(4,6);
	demo d2(d1);
}
