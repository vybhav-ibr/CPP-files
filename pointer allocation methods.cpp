#include<iostream>
using namespace std;
main()
{
	int a=69;
	int &p= a;
	int *ptr= &a;
	p=420;
	ptr = 69;
	cout<<p<<" "<<*ptr;
}
