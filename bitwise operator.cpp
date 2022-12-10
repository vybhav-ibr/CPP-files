#include<stdio.h>
main()
{
int n, y=0, r;
printf("enter the number =");
scanf("%d", &n);
while (n!=0)
{
r=n%10;
y=y*10+r;
n=n/10;
}
printf("reverse is= %d", y);
}
