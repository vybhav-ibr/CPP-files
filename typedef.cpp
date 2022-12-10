#include<stdio.h>
main()
{
	typedef int my_int;
	my_int a[100],n,i,sum=0;
	printf("Enter the n=");
	scanf("%d",&n);
	printf("Enter the elements =");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum is= %d",sum);
	
}
