#include<stdio.h>

struct student

{//variable are known as data membe 
int rollno;
char name[40];
int marks;

};

main()

{ 
struct student *p;
struct student obj;
p=&obj;
printf("enter rollno=");
scanf("%d", &p->rollno); 
printf("\n enter name=");
scanf("%s", &p->name);
printf("\n enter marks="); 
scanf("%d", &p->marks);

printf("rollno is:=%d\n", p->rollno);
printf("name is= %s\n", p->name); 
printf("marks is= %d\n", p->marks);
}
