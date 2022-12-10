#include<stdio.h> 
int add(int b[], int len) // b[]= {1,2,3,4}. len =4 
{ 
int sum=0, i; 
for(i=0; i<len;i++) 
{ 
 sum=sum+b[i]; 
 }return sum; 
} 
main()
{
 int a[] {1,2,3,4}; // total size is 4*4 =16 
 int len= sizeof(a)/sizeof(a[0]); //16/4 =4 
 printf("%d", add(a, len)) ; 
}
