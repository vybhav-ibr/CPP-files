#include <bits/stdc++.h>
#include<math.h>
#include<iostream>

using namespace std;
class calc
{
	public:
	double base;
	int exp;
	static double result;
	int power(double n,int p=2)
	{
		static double result= pow(n,p+2);
		cout<<" \n Result :"<<result;
	}
	int power(char n,int p=0)
	{
		static char result= n+n;
		cout<<"\n Result :"<<result;
	}
	int power(float n,int p=2)
	{
		static float result= pow(n,p);
		cout<<"\n Result :"<<result;
	}
	int power(int n,int p=2)
	{
		static int result= pow(n,p);
		cout<<"\n Result :"<<result;
	}
	
};
int main() 
{
	calc op1,op2,op3,op4,op5;
	op1.power(5.568);
	op2.power(25.6,2);
	op3.power('k');
	op4.power(45,3);
	op5.power(36.56,1);
}

