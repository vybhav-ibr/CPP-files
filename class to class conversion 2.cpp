/class to class: casting operator in the source class
#include<iostream>
#include<string>
using namespace std;

class employee;

class student
{
int reg_number;
float cgpa;
public:
void get()
{
cout<<"Enter the registration number: ";
cin>>reg_number;
cout<<"Enter the cgpa: ";
cin>>cgpa;
}
operator employee();
};

class employee
{
public:
int e_id;
void print()
{
cout<<"\nYour employee id is: "<<e_id;
}
};

student::operator employee()
{
employee ob;
ob.e_id=reg_number;
return(ob);
}
main()
{
student s1;
s1.get();

employee e1;

e1=s1;//class to class

e1.print();
}
