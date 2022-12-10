#include<stdio.h>
#include<stdlib.h>
main()
{
	int n;
	printf("Enter the number =");
	scanf("%d",&n);
	if(n%2==0)
	goto A;
	else
	goto B;
	
	A:
		printf("Number is even");
		return 0;
	B:
		printf("Number is odd");
}
