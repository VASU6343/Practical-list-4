#include<iostream>
using namespace std;
class employee
{
	private:
		int Emp_id;
		char Emp_name[10];
		
	public:
		void getdata()
		{
      cout<<"220130318016";
      cout<<"Vasu Sapariya";
			cout<<"Enter the Emp_id::";
			cin>>Emp_id;
			cout<<"Enter the Emp_name::";
			cin>>Emp_name;
		}
		void putdata()
		{
			cout<<"id is"<<Emp_id<<endl;
			cout<<"name is"<<Emp_name<<endl;
		}
};
int main()
{
	int i,n;
	cout<<"Enter the size of array::";
	cin>>n;
	employee e1[20];
	cout<<"Enter the number::"<<endl;
	for(i=0;i<n;i++)
	{
		e1[i].getdata();
	}
	cout<<"Emp detail is::"<<endl;
		for(i=0;i<n;i++)
	{
		e1[i].putdata();
	}
	return 0;
}
