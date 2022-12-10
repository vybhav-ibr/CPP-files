#include<stdio.h>
void add(int a)
{
a=a+1;
printf("value in function= %d \n", a); 
printf("address in function = %d \n", &a);
}
main()
{
int a= 10;
printf("value is= %d \n", a); // 10
printf("address in main = %d \n", &a);
add(a);
printf("value in main= %d \n", a); //10 
}
