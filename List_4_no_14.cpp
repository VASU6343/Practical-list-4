
#include<iostream>
using namespace std;
class rectangle
{
	int l,b;
	public:
		rectangle()
		{
      cout<<"220130318016";
      cout<<"Vasu Sapariya";
			cout<<"Enter length of Rectangle ::";
			cin>>l;
			cout<<"Enter Bredth of Rectangle ::";
			cin>>b;
			
			cout<<"Area of Rectangle is ::"<<l*b<<endl;
		}
		
		~rectangle()
		{
			cout<<"Destructor Called"<<endl;
		}
		
};
int main()
{
	rectangle r1;
}
