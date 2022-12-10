#include<stdio.h>
main()
{
	int n,y=0,r,t;
	printf("Enter the number =");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		y=y*10+r;
		n=n/10;
	}
    printf("The reverse of the number is=%d \n",y);
    if (t==y)
    printf("The number is a palindrome");
	else
	printf("The number is not a palindrome");
}
