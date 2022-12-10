#include<stdio.h>
#include<conio.h>
int a;
void func1()
{
 a=a+10;
 printf("%d \n",a);
}
void func2()
{
 a=a+5;
 printf("%d \n",a);
}
main()
{
 func1();func2();
 a=a+1;
 printf("%d \n",a);
 func1();
 func2();
 getch();
} 

