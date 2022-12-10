#include<stdio.h>
main()
{
	char c;
	printf("Enter the charecter =");
	scanf("%c",&c);
	printf("%d\n",&c);
	if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	 printf("The given charecter is a vowel");
	else
	 printf("The given charecter is a consonent"); 	 
}
