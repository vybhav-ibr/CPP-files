#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the value of n=");
	scanf("%d",&n);
	for(i= 0;i<=10; i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}

