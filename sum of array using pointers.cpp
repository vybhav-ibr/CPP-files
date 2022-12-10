#include<stdio.h>

main()

{

int a[5], i, sum=0 , *p;
printf("enter the elements=");
for(i=0; i<=4; i++)

{ scanf("%d", &a[i]); }
p= &a[0];

for(i=0; i<=4; i++)

{

sum= sum+ (*p);

p++; }

printf("“sum is= %d", sum);
}
