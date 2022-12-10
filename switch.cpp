#include<stdio.h>
main()
{
int a;
printf("enter the number");
scanf("%d", &a);
switch(a%2)
{
case 0:
printf("The Number is even");
break;
case 1:
printf("The Number is odd");
}
}
