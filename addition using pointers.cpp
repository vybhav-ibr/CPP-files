#include<stdio.h>
main()
{
 int a=10,b=20,c;
 int *p1,*p2;
 p1=&a;
 p2=&b;
 c=(*p1)+(*p2);
 printf("sum is %d",c)	;
}
