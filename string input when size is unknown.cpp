#include<conio.h>
#include<stdio.h>
main()
{
int n;
char user_input[255];
fgets(user_input, 255, stdin);
printf("%s",user_input);

n=sizeof(user_input)/sizeof(user_input[0]);
printf("%d",n);
}
