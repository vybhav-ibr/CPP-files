#include<stdio.h>
struct Stu_Marks
{
	int rollno;
	char first_name[50];
	int chem_marks;
	int mat_marks;
	int phy_marks;
	int avg_marks;
};
main()
{

struct Stu_Marks stu_one;
printf("\n Enter the rollnumber,first name,chemistry marks,maths marks and physics marks of student 1=");
scanf("%d %s %d %d %d", &stu_one.rollno,&stu_one.first_name,&stu_one.chem_marks,&stu_one.mat_marks,& stu_one.phy_marks);
stu_one.avg_marks=(stu_one.chem_marks + stu_one.mat_marks + stu_one.phy_marks)/3;

struct Stu_Marks stu_two;
printf("\n Enter the rollnumber,first name,chemistry marks,maths marks and physics marks of student 2=");
scanf("%d %s %d %d %d", &stu_two.rollno,&stu_two.first_name,&stu_two.chem_marks,&stu_two.mat_marks,& stu_two.phy_marks);
stu_two.avg_marks=(stu_two.chem_marks + stu_two.mat_marks + stu_two.phy_marks)/3;

struct Stu_Marks stu_three;
printf("\n Enter the rollnumber,first name,chemistry marks,maths marks and physics marks of student 3=");
scanf("%d %s %d %d %d", &stu_three.rollno,&stu_three.first_name,&stu_three.chem_marks,&stu_three.mat_marks,& stu_three.phy_marks);
stu_three.avg_marks=(stu_three.chem_marks + stu_three.mat_marks + stu_three.phy_marks)/3;

struct Stu_Marks stu_four;
printf("\n Enter the rollnumber,first name,chemistry marks,maths marks and physics marks of student 4=");
scanf("%d %s %d %d %d", &stu_four.rollno,&stu_four.first_name,&stu_four.chem_marks,&stu_four.mat_marks,& stu_four.phy_marks);
stu_four.avg_marks=(stu_four.chem_marks + stu_four.mat_marks + stu_four.phy_marks)/3;

printf("\nstudent 1:	Name	Rollno 	chem	mat	phy	avg");
printf("\n \t  %s \t %d \t %d \t %d \t %d \t %d \t %d",stu_one.first_name,stu_one.rollno, stu_one.chem_marks, stu_one.mat_marks, stu_one.phy_marks,stu_one.avg_marks);

printf("\nstudent 2:	Name   Rollno  chem   mat  phy  avg");
printf("\n \t  %s \t %d \t %d \t %d \t %d \t %d \t %d",stu_two.first_name,stu_two.rollno, stu_two.chem_marks, stu_two.mat_marks, stu_two.phy_marks,stu_two.avg_marks);

printf("\nstudent 3:	Name   Rollno  chem   mat  phy  avg");
printf("\n \t  %s \t %d \t %d \t %d \t %d \t %d \t %d",stu_three.first_name,stu_three.rollno, stu_three.chem_marks, stu_three.mat_marks, stu_three.phy_marks,stu_three.avg_marks);

printf("\nstudent 4:	Name   Rollno  chem   mat  phy  avg");
printf("\n \t  %s \t %d \t %d \t %d \t %d \t %d \t %d",stu_four.first_name,stu_four.rollno, stu_four.chem_marks, stu_four.mat_marks, stu_four.phy_marks,stu_four.avg_marks);
}
