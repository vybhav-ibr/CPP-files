#include<iostream>
using namespace std;
class DB;
class DM
{
	public:
	int dist_in_m;
	float sum_in_m;
	friend void sum_and_print(DM a,DB b);
	void get_m()
	{
		cout<<"Enter the distance in meter :";
		cin>>dist_in_m;
	}
};
class DB
{
	public:
	int dist_in_f;
	float sum_in_f;
	friend void sum_and_print(DM a,DB b);
	void get_f()
	{
		cout<<"Enter the distance in feet :";
		cin>>dist_in_f;
	}
};
void sum_and_print(DM obj1,DB obj2)
{
  obj1.sum_in_m= obj1.dist_in_m + obj2.dist_in_f*0.30;
  obj2.sum_in_f= obj2.dist_in_f + obj1.dist_in_m*3.28;
  cout<<"\n The sum in meter is :"<<obj1.sum_in_m;
  cout<<"\n The sum in feet is :"<<obj2.sum_in_f;
}
main()
{
  DM met;
  DB feet;
  met.get_m();
  feet.get_f();
  sum_and_print(met,feet);
}

