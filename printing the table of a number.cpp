#include<iostream>
using namespace std;
int main()
{int a,limit,ans,i;
cout<<"enter number whose table is to be printed";
cin>>a;
cout<<"enter limit of table";
cin>>limit;
for(i=0;i<=limit;i++)
{ans=a*limit;
cout<<a<<"*"<<i<<"="<<ans;
cout<<"\n";
}
}
