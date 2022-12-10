#include<stdio.h>
main()
{
	int grade;
	printf("Enter the grade");
	scanf("%d",&grade);
	if(grade>90)
	 printf("A grade");
	 else if(grade>80)
	 printf("B grade");
	 else if(grade>70)
	 printf("C grade");
	 else if(grade>60)
	 printf("D grade");
	 else
	 printf("Fail");
}
	 
	 
