#include<stdio.h>
main()
{
	int i,n,fact=1;
	printf("Enter the value of n=");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
		printf("%d\n",fact);
}

