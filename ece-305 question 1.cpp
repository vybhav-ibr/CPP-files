#include<stdio.h>

main()
{
 int n,i,j;
 int row_one[5];
 int row_two[5];
 int row_three[5];
 int row_four[5];
 int row_five[5];
 int row_six[5];

 printf("Enter the degree of the equation :");
 scanf("%d",&n);
 
  int coeff[n];
  for(i=0;i<=n;i++)
   {
   	printf("Enter all the coefficient in the order of S^0,s^1,s^2,s^3,.....");
   	scanf("%d",&coeff[i]);
   }
    for(i=n;i>=0;i--)
   {
  	printf("\t");
	printf("%d",coeff[i]);
   	printf(".S^");
   	printf("%d",i);
   }
    for(i=n;i>=0;i--)
      {
	  row_one[0]= coeff[i];
	  row_one[1]=coeff[i-2];
	  row_one[2]=coeff[i-4];
	  row_one[3]=coeff[i-6];
      row_two[0]= coeff[i-1];
      row_two[1]=coeff[i-3];
      row_two[2]=coeff[i-5];
      row_two[3]=coeff[i-7];
    }
	for(i=0;i<5;i++)
	 row_three[i]=((row_two[i]*row_one[i+1])-(row_two[i+1]*row_one[i]))/row_one[i];
	}while(Q<6);
    for(i=0;i<5;i++)
    { row_four[i]=(row_three[i]*row_two[i+1]-row_three[i+1]*row_two[i])/row_three[i];}
    for(i=0;i<5;i++)
    { row_five[i]=(row_four[i]*row_three[i+1]-row_four[i+1]*row_three[i])/row_four[i];}
	for(i=0;i<5;i++)
    { row_six[i]=(row_five[i]*row_four[i+1]-row_five[i+1]*row_four[i])/row_five[i];}
    for(i=0;i<=n;i++)
    { printf("%d",row_one[i]);
      printf("%d",row_two[i]);
      printf("%d",row_three[i]);
      printf("%d",row_four[i]);
      printf("%d",row_five[i]);
      printf("%d",row_six[i]);
    }
}

