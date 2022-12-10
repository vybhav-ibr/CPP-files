#include<stdio.h>
main()
{
	char op;
	int a,b,c;
	printf("Enter the numbers and the operation");
	scanf("%d %c %d",&a,&op,&b);
	switch(op)
	{
	        case'+':
			c=a+b;
			printf("sum is = %d",c);
			break;
			
			case'-':
			c=a-b;
			printf("difference is = %d",c);
			break;
		
			case'*':
			c=a*b;
			printf("multiplication is = %d",c);
			break;
		    
			case'/':
			c=a/b;
			printf("division is = %d",c);
			break;
			
			default:
			printf("Symbol not valid");
		
	}
	
return(0);
}
