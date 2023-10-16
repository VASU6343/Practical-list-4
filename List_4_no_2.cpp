#include<iostream>
using namespace std;
class item
{
	private:
		static int number;
		static int count;
	public:
		static void getdata()
		{ 
      		cout<<"220130318016";
      		cout<<"Vasu Sapariya";
			int a=0;
			number=a;
			count++;
		}
		static void get_count()
		{
				cout<<"Value of count ::"<<count<<endl;
		}
};
int item :: number;
int item :: count;
int main()
{

	item ::getdata();
	item ::getdata();
	item ::getdata();
	item :: get_count();
	return 0;
	
}
