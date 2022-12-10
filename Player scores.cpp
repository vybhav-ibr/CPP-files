#include<iostream>
using namespace std;
class player
{
	int score;
	float average;
	
	public:
		void getdata()
		{
			cout<<" \t Enter the score \n";
			cout<<"\t Score :";
			cin>>score;
			cout<<"\t Average :";
			cin>>average;
		}
	    void putdata();
	
};
void player::putdata()
{
	cout<<" \t The player details are";
	cout<<"\n \t score :"<<score;
	cout<<"\n \t Average :"<<average;
}
int main()
{
	player one;
	player two;
	cout<<"Player one \n";
	one.getdata();
	cout<<"\n Player two \n";
	two.getdata();
	cout<<"Player one \n";
	one.putdata();
	cout<<"\n Player two \n";
	two.putdata();
	return 0;
}
