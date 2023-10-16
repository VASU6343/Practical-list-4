#include<iostream>
using namespace std;
class temp 
		{
  		int no1,no2,add;
  		public:
  		void input() 
		{
			  cout<<"220130318016";
			  cout<<"Vasu Sapariya";
  			cout<<"Enter the value of No1:";
  			cin>>no1;
  			cout<<"Enter the value of No2:";
  			cin>>no2;
 		}
  			friend void add(temp &t);
  			void display() 
 		{
   			cout<<"The of No1 & No2 is :"<< add;
		}
};
  		void add(temp &no3) 
		{
   			no3.add = no3.no1 +no3.no2;
		}
  int main() 
{
   temp no3;
   no3.input();
   add(no3);
   no3.display();
   return 0;
}
