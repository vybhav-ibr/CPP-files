#include<stdio.h>
void add(int *p)
{
*p=*p+1;
printf("value in function= %d \n", *p); 
printf("address in function = %d \n", p);
}
main()
{
int a= 10;
printf("value is= %d \n", a); // 10
printf("address in main = %d \n", &a);
add(&a);
printf("value in main= %d \n", a); //10 
}
