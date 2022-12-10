#include<iostream>
using namespace std;

class box
{
int l,b,h;
public:
void getvalues(int a, int x, int c)
{
l=a; b=x; h=c;
}

int volume()
{
int v=l*b*h;
return v;
}
};

int main()
{
box B;
int result;
B.getvalues(10,10,10);
result=B.volume();
cout<<"The volume of the box is: "<<result<<endl<<endl;

int x,y,z;
cout<<"Enter the length: ";
cin>>x;
cout<<"Enter the width: ";
cin>>y;
cout<<"Enter the height: ";
cin>>z;

void(box::*pf)(int, int, int)=&box::getvalues;
(B.*pf)(x,y,z);
result =B.volume();
cout<<"The volume is\n "<<result;
}
