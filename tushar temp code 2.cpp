#include <stdio.h>
struct student {
    char first_name[50];
    char last_name[40];
    int age;
    int standard;
} s;

int main()
 {
   struct student stud[10];
    int i;
    for(i=0; i<9; i++)
	  {  
	     printf("Student %d\n",i+1);
         printf("Enter age: ");
         scanf("%d", &s.age);
         printf("Enter last_name: \n");
         fgets(s.last_name, sizeof(s.last_name), stdin);
         printf("Enter first_name: ");
         fgets(s.first_name, sizeof(s.first_name), stdin);
    
         printf("Enter standard: ");
         scanf("%d", &s.standard);
       }
    for(i=0; i<9; i++)
      {
      	printf("Student %d\n",i+1);
        printf("age: %d\n", s.age);
        printf("first_Name: ");
        printf("%s", s.first_name);
        printf("lastt_Name: ");
        printf("%s", s.last_name);
        printf("standard: %d\n", s.standard);
	  
}
}
