#include<stdio.h>
#include<string.h>
main()
{
char s1[]="hello"; //105+ 101+
char s2[]= "world"; //124+
char s3[]= "lovely";
int i, j, k;
i= strcmp(s1,"hello"); //0
j= strcmp(s1, s2); // -1
k= strncmp (s3, "love", 4); //0
printf("%d \n %d \n %d",i, j, k);
}
