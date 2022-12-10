#include<stdio.h> 
void print(int num)
{
	printf("%d\n",num);
}
main()
{
	int a[5]={1,2,3,4,5};
	int i;
	for(i=0;i<=4;i++)
	{
		print(a[i]);
	}
}
