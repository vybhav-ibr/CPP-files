#include<stdio.h> 
struct student
{
 char name[40]; 
 int rollno;
}; 
void display (struct student *obj1)
{

printf("name is=%s\n", obj1->name); 
printf("rollno is= %d", obj1->rollno);
}
main()
{
struct student obj; 
printf("enter name="); 
scanf("%s", &obj.name); 
printf("enter rollno="); 
scanf("%d", &obj.rollno); 
display(&obj); 
}
