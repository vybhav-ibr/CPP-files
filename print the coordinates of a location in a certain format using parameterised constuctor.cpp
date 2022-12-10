#include<iostream>
using namespace std;
class angle
{
	int deg;
	float min;
	char dir;
	public:
	 void getdeg()
	 {
	 	cout<<"Enter the latitude or a longitude angle :";
	 	cin>>deg;
	 	cout<<"Enter the minutes value :";
	 	cin>>min;
	 	cout<<"Enter the direction value :";
	 	cin>>dir;
	 }
	 void print()
	 {
	 	cout<<deg<<"*"<<min<<"'"<<dir;
	 }
	 angle(int x=10,float y=10.0,char z='N')
	 {
	 	deg=x;
	 	min=y;
	 	dir=z;
	 }	  
};
main()
{
	angle a;
	cout<<"\n Default constructor:";
	a.print();
	angle b(15,25.9,'E');
	cout<<"\n Defined constructor:";
	//b.angle(15,25.9,'E');
	b.print();
	
}
