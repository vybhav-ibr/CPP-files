#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter first number :");
scanf("%d", &a);
printf("Enter second number :");
scanf("%d", &b);
c = a<b;
printf("%d < %d = %d \n", a, b, c);
c = a<=b;
printf("%d <= %d = %d \n", a, b, c);
c = a>b;
printf("%d > %d = %d \n", a, b, c);
c = a>=b;
printf("%d >= %d = %d \n", a, b, c);
c = a==b;
printf("%d == %d = %d \n", a, b, c);
c = a!=b;
printf("%d != %d = %d \n", a, b, c);
return 0;
}
