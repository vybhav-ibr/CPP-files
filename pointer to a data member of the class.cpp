#include<iostream>
using namespace std;
class A
{
	public:
	int m,n;
	void show();
	};
int A::*ip=&A::m;
int A::*iq=&A::n;
//A::*ip= 10;

main()
{
A a;
a.m=10;

cout<<"In class"<<" "<<a.*ip<<" "<<iq;
}
