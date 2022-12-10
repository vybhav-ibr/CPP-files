#include<stdio.h> 
struct student
{
int rollno;
char name;
};

main()

{

struct student obj;

obj.rollno=15;

obj.name='b';

printf("rollno is=%d\n", obj.rollno); 
printf("name is= %c", obj.name);

}
