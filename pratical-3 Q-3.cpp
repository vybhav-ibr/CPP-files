#include<stdio.h>
main()
{
	int marks[5];
	const int max=5;
	int *ptr[max];
	int i=0,sum=0,avg;
	char num;
	for(i=0;i<5;i++)
	{
		printf("Enter the marks of five subject :");
		scanf("%d",&marks[i]);
		ptr[i]=&marks[i];
	}
	for(i=0;i<5;i++)
	{
		sum=sum + *ptr[i];
    }
    avg=sum/5;
	printf("The average is : ");
	printf("%d",avg);
	printf("\n");
    printf("Result from the pointer :");
	for(i=0;i<5;i++)
    {
    	printf("\t");
		printf("%d ",*ptr[i]);
	}
}
