#include<iostream>
#include<string>
using namespace std;

class test
{
int n_q;
int t_marks;
public:
test()
{
n_q=15;
t_marks=30;
}
void print_test()
{
cout<< "Questions are : "<<n_q<<endl;
cout<<"marks are : "<<t_marks<<endl;
}
};
class student:public virtual test
{
int s_id;
int s_marks;
public:
student()
{
cout<<"Enter your student id : ";
cin>>s_id;
cout<<"Enter your marks : ";
cin>>s_marks;
}
void print_s()
{
cout<<"Your student id is : "<<s_id<<endl;
cout<<"your marks is : "<<s_marks<<endl;
}
};
class faculty:public virtual test
{
int f_id;
int f_marks;
public:
faculty()
{
cout<<"Enter your id : ";
cin>>f_id;
cout<<"Enter your marks : ";
cin>>f_marks;
}
void print_f()
{
cout<<"Your id is : "<<f_id<<endl;
cout<<"Your marks are : "<<f_marks<<endl;
}
};
class university:public student,public faculty
{
};
main()
{
university u;
u.print_test();
u.print_s();
u.print_f();
}
