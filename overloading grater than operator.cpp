#include<conio.h>
#include<iostream>
using namespace std;
class rank
{
	public: 
	int m;
	void enter()
	{
		cout<<"Enter marks :";
		cin>>m;
	}
	friend int operator >(rank &obj1,); 
};
int operator >(rank obj1,obj2)
{
	if(obj1.m > obj2.m)
	 {
	 cout<<"First student is topper";
	 return(1);
     }
	else
	 {
	 cout<<"Second student is topper";
     return(0);
	 }
}
main()
{
	rank s1;
	s1.enter();
	rank s2;
	s2.enter();
	int n= s1>s2;
}
