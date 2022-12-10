#include<stdio.h>
main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("Enter the 2d array = ");
	for(i=0;i<=1;i++)
	{
	  for(j=0;j<=2;j++)
	  {
	  	scanf("%d",&a[i][j]);
		  
	  }	
	}
    printf("The entered data is \n");
	for(i=0;i<=1;i++)
	{
	  for(j=0;j<=2;j++)
	  {
	  	printf("\t %d",a[i][j]);
	  }
	  printf("\n");
	}	
}
