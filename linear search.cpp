#include<stdio.h>
main()
{
	int a[10],x,flag=0,i;
	printf("Enter the array=");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search element= ");
	scanf("%d",&x);
	for(i=0;i<=9;i++)
	{
		if(x==a[i])
		{
		 flag=1;
		 break;
		}
	}
	if(flag==1)
	 printf("The element is present");
	else
	 printf("Not present");
}
