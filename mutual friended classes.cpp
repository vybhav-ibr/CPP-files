#include<iostream>
using namespace std;

class f2;

class f1
{
int a;
public:
void get(f2 &ob);
friend class f2;
};
class f2
{
int b;
public:
void put(f1 ob)
{
cout<<endl;

cout<<"a: "<<ob.a<<endl;
cout<<"b: "<<b<<endl;
}
void sm(f1 ob)
{
cout<<endl<<"The Sum is "<<ob.a+b;
}
friend class f1;
};

void f1:: get(f2 &ob)
{
cout<<"Enter a number: ";
cin>>a;
cout<<"Enter another number: ";
cin>>ob.b;
}

int main()
{
f1 ob1;
f2 ob2;

ob1.get(ob2);
ob2.put(ob1);

ob2.sm(ob1);
}
