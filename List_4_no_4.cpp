#include<iostream>
using namespace std;
class number
{
	public :
		void setdata(int a,int b);
		int no_1,no_2;
};
void number :: setdata(int a,int b)
{
	cout<<"220130318016";
	cout<<"Vasu sapariya";
	cout<<"Enter the value of a ::";
	cin>>a;
	cout<<"Enter the value of b ::";
	cin>>b;
	no_1=a;
	no_2=b;
}
int add(number n)
{
	return(n.no_1+n.no_2);
};
int main()
{
	number n1;
	n1.setdata(n1.no_1,n1.no_2);
	cout<<"addition ::"<<add(n1);
	return 0;
}
