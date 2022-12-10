#include<stdio.h> 
#include<string.h>
#include<conio.h>

main()
{
char temp;
int n_one,n_two,T;
int i, j;

printf("Enter the no.of test cases =");
scanf("%d",&T);

printf("Enter the no.of charecters for string 1 =");
scanf("%d",&n_one);

char string_one[n_one];
printf("Enter the charecters =");
scanf("%s",&string_one);

printf("Enter the no.of charecters for test case 2 =");
scanf("%d",&n_two);
char string_two[n_two];
printf("Enter the charecters =");
scanf("%s",&string_two);


for (i = 0; i < n_one -1; i++)	
   {
 	for (j = 0; j < n_one -i-1; j++)
      {
 		if (string_one[j] > string_one[j+1])
 		{
 			temp= string_one[j];
 			string_one[j]= string_one[j+1];
 		    string_one[j+1]= temp;
 	}	}
 }
 for (i = 0; i < n_two-1; i++)	
   {
 	for (j = 0; j < n_two -i-1; j++)
      {
 		if (string_two[j] > string_two[j+1])
 		{
 			temp= string_two[j];
 			string_two[j]= string_two[j+1];
 		    string_two[j+1]= temp;
 	}	}
 }
 
printf("The output strings are :");
printf("\n");
printf("string 1:   ");
printf("%s \n",string_one);
printf("String 2:   ");
printf("%s ",string_two);
}
