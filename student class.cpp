#include<iostream>
using namespace std;
class admission
{
	static int totaladmission;
	int reg_number;
	char course[20];
	
	public:
		void input()
		{
		     cout<<" \t Enter the Details \n";
			cout<<"\t Reg_number:";
			cin>>reg_number;
			cout<<"\t Course name :";
			cin>>course;
		}
	    void total();
	    void output()
	    {
	        cout<<" \t The Details are:\n";
			cout<<"Reg no."<<reg_number;
			cout<<"\t Course name :"<<course;	
		}
};
int admission::totaladmission=50;
void admission::total()
{
	totaladmission=totaladmission+1;
	cout<<"totaladmission :"<<totaladmission;
}
int main()
{
	admission one;
	admission two;
	cout<<"admission one \n";
	one.input();
	one.total();
	one.output();
	cout<<"\n admission two \n";
	two.input();
	two.total();
	two.output();
	cout<<"admission one \n";
	one.output();
	cout<<"\n admission two \n";
	two.output();
	return 0;
}
