#include<iostream>
using namespace std;
class N
{
	int x,y;
	public:
	 set_xy(int a,int b)
	 {
	  x=a;
	  y=b;
	 }
	 friend void sum(N n);
};
void sum(N n)
{
	int N::*p1=&N::x;
	int N::*p2=&N::y;
	int finalSum= n.*p1+ n.*p2;
	cout<<"\n The sum of the numbers is :"<<finalSum;
}
main()
{
	N case1,case2;
	case1.set_xy(42,56);
	sum(case1);
	case2.set_xy(4,76);
	sum(case2);
}
