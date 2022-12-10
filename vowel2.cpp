#include<stdio.h>

main()

{

char c;

printf("enter the charcter= ");
scanf("%c", &c);

switch(c)
{ 
 case 'a':
 case 'e':
 case 'i':
 case '0':
 case 'U':

printf("charcter is vowel");
break;

default:

printf("charcter is consonent");
}
}
