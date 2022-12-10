#include<stdio.h> 
struct student {

int rollno; char name[30];

};
 main()
{

struct student obj;
struct student *p; //wild pointer 
p= &obj;
printf("enter the rollno=");
scanf("%d", &p->rollno);
printf("enter name=") ;
scanf("%s", &p->name);
printf("rollno is= %d\n", p->rollno); 
printf("name is =%s",p->name);

}



