#include<iostream>
#include<string>
using namespace std;
class fndr
{
	public:
		string s;
	    int n= s.length();
		fndr(string a)
		{
			s=a;
			cout<<s;
		}
		void rep()
		{
			for(int i=0;i<=n;i++)
			{
				if(s[i]==' ')
				  {s[i]='7';}
			}
		}
		void output()
		{
			cout<<"\n The modified string is :";
			cout<<"\n \t"<<s;
		}
};
main()
{
	fndr f1("This is the input of the function");
	f1.rep();
	f1.output();
	return 0;
}
