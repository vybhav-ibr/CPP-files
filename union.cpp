#include<stdio.h> 
union stu
{
	float c;
	int a;
};
main()
{
	union stu obj;
	printf("Enter int");
	scanf("%d",&obj.a);
	printf("Enter float");
	scanf("%f",&obj.c);
	printf("INT is = %d \n",obj.a);
	printf("Float is=%f \n",obj.c);
}
