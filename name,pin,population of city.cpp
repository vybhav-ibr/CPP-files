#include<iostream>
#include<string>
using namespace std;
class city
{
	string name;
	int pin;
	int population;
	public:
		void getdata()
		{
			cout<<"\n \t Enter the city Name :";
			cin>>name;
			cout<<" \t Enter the city pin :";
			cin>>pin;
			cout<<" \t Enter the population :";
			cin>>population;
		}
		void print()
		{
			if(name[0]=='B'|name[0]=='b'|name[0]=='C'|name[0]=='c')
			{
				cout<<"\n";
				cout<<"\n \t City Name : "<<name;
				cout<<"\n \t City Pincode : "<<pin;
				cout<<"\n \t City Population : "<<population;
			}	
		}
};
main()
{
 city c1,c2;
 cout<<"City One :";
 c1.getdata();
 c1.print();
 cout<<"\n City two  :";
 c2.getdata();
 c2.print();	
}
