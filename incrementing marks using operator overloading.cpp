#include<stdio.h>
#include<iostream>
using namespace std;
class CA
{
	public:
	int mar;
	void marks()
	{
		cout<<"Enter the marks :";
		cin>>mar;
	}
	friend void operator ++(CA obj); 
};
void operator ++(CA obj)
{
	++obj.mar=obj.mar+1;
}
main()
{
	CA s1;
	s1.marks();
	++s1;
	cout<<"The marks after correction is :"<<s1.mar;
}
