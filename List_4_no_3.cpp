#include<iostream>
using namespace std;
class student
{
		private:
			float spi;
			string name;
		public:
			void getdata()
		{
			cout<<"220130318016";
			cout<<"Vasu sapariya";
			cout<<"Enter the Name::";
			cin>>name;
			cout<<"Enter the SPI::";
			cin>>spi;
		}
		void putdata()
		{
			cout<<name<<endl;
			cout<<spi<<endl;
		}
		float sp()
		{
			return spi;
		}
		string na()
		{
			return name;
		}
};
int main()
{
	int i;
	student s[10];
	for(i=0;i<10;i++)
	{
		s[i].putdata();
	}
	for(i=0;i<10;i++)
	{
		s[i].getdata();
	}
	int high=0;
	for(i=1;i<10;i++)
	{
		if(s[i].sp()>s[high].sp())
		{
			high=i;
		}
	}
	cout<<"Highest spi and name is :: "<<s[high].sp()<<" & "<<s[high].na();
	return 0;
	
}
