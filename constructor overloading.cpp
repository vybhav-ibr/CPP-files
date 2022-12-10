#include<iostream>
using namespace std;
class rect
{
	int length;
	int width;
	int sum;
	public:
		rect()
		{
			length=1;
			width=1;
		}
		rect(int x,int y)
		{
			length=x;
			width=y;
		}
		rect(const rect &obj)
		{
		    length= obj.length;
		    width= obj.width;
		}
		void add()
		{
			sum=length+width;
			cout<<"Sum :"<<sum<<endl;
		}		
};
main()
{
	rect r1;
	cout<<"R1:"<<endl;
	r1.add();
	rect r2(2,2);
	cout<<"R2:"<<endl;
	r2.add();
	rect r3= r2;
	cout<<"R3:"<<endl;
	r3.add();
}
