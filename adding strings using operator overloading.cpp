#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
class con
{
	public:
	string s1[20];
	string s2[20];
	string s3[50];
	void enter()
	{
		cout<<"Enter the string1 :";
		getline(cin,s1);
		cout<<"Enter the string2 :";
		for(i=0;i<=20,i++)
		{
			cin>>s2[i];
		}
	}
	void operator ++(con obj) 
	{
	 obj.s3= obj.s1+obj.s2);
	}
};
main()
{
	con w1;
	w1.enter();
	w1.s1 ++ w1.s2;
	cout<<"The string after addition is :"<<w1.s3;
}
