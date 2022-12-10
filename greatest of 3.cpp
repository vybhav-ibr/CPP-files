#include<iostream>
using namespace std;
main()
{
	int num1,num2,num3;
	cout<<"Enter the three numbers:";
	cin>>num1>>num2>>num3;
	if(num1>num2)&&(num1>num3)
	 {
	 cout<<"num1 is the greatest";
	 }
	else if(num2>num1)&&(num2>num3)
	{
     cout<<"num1 is the greatest";
     }
	   else
      {  
		cout<<"num3 is the greatest";
	  }  
}
