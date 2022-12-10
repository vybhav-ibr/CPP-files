#include<conio.h>
#include<iostream>
using namespace std;
class check
{
	public: 
	int m;
	void enter()
	{
		cout<<"Enter number :";
		cin>>m;
	}
	void operator =(check &obj)
    {
	m=obj.m;
    }
};
main()
{
	check one;
	one.enter();
	check two;

	two=one;///s2.operator=(s1)
	cout<<"The first variable is :"<<one.m;
	
	cout<<"\n The second variable is :"<<two.m;
}
