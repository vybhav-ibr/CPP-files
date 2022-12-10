#include<iostream>
using namespace std;
main()
{
	int a=25;
	int *p=&a;
	int update(int *p);
	cout<<"\n Before function call :"<<a;
	cout<<"\n after function call :"<<update(p);
	
}
int update(int *x)
{
	*x=*x+4;
	return *x;
}
