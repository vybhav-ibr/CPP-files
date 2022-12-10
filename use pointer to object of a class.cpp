#include<iostream>
using namespace std;

class vote
{
	int age;
	char status[15];
	public:
	void getage(Vote a);
	{
		cout<<"Enter the age of the person :";
		cin>>p->age;
	}
	void getstatus(Vote a);
    {
     if(a.age>=18)
       p->status="Eligible";
     else
       p->status="Not eligible";
	}	
};
main()
{
	vote p1,p2,p3,p4;
	vote *p=&p1;
	
}
