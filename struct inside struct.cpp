#include<stdio.h>

struct student //outer strcuture
{
int rollno;
char name[30];

 struct mark //inner strcuture 
 { 
  int s_mark;
  int m_mark;
 }m;

};

main()

{

int avg;

struct student obj;
printf("enter the rollno=");

scanf("%d", &obj.rollno);

printf("enter name=");
scanf("%s", &obj.name);

printf("enter the science mark="); 
scanf("%d", &obj.m.s_mark);
printf("enter the math mark="); 
scanf("%d", &obj.m.m_mark); 
avg= ((obj.m.s_mark)+(obj.m.m_mark)/2);

printf("rollno is= %d\n", obj.rollno); 
printf("name is =%s\n", obj.name);
printf("science mark is= %d \n", obj.m.s_mark); 
printf("mark mark is= %d\n", obj.m.m_mark); 
printf("average is= %d", avg);
}
	
