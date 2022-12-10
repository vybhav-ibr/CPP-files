#include<stdio.h> 
#include<string.h>

main()

{

char s1[]="hello"; //1.05+ 101+

char s2[]="world"; //124+

char s3[]="lovely";

int i, j, k;

i= strcmp(s1,"hello"); //0 
j= strcmp(s1, s2); //
k= strcmp (s3, "love"); 

printf("%d\n%d \n %d",i, j, k);
}
