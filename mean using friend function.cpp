/*
Create a class sample with data members num1, num2 and num3, A member 
function to initialize the data members and a friend 
function to calculate the mean of the data members and print it.
*/
#include<iostream>
using namespace std;
class sample
{
 int num1,num2,num3;
 public:
   void initialise(int n1=0,int n2=0,int n3=0)
   {
     num1=n1;
	 num2=n2;
	 num3=n3; 	
    }
	friend void	mean(sample obj);
	
};
void mean( sample obj)
{
	cout<<"The mean of the given numbers is "<<(obj.num1+obj.num2+obj.num3)/2;
}
int main()
{
	sample c1,c2;
	cout<<"Instance One :\n";
	c1.initialise(25,21,48);
	mean(c1);
	cout<<"\n Instance two :\n";
	c2.initialise(14,8,7);
	mean(c2);
}
