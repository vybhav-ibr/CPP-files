#include<iostream>
using namespace std;
class toolBooth
{
	public:
		static unsigned int CarTotal;
	    static double CashTotal;
		void payingCar()
		{
			CarTotal++;
			CashTotal+=0.5;
		}
		void nopaycar()
		{
			CarTotal++;
		}
		static void display()
		{
			cout<<"\n Total number of Cars :"<<CarTotal;
			cout<<" \n Total cash collected :"<<CashTotal;
		}
};
unsigned int toolBooth::CarTotal=0;
double toolBooth::CashTotal=0;
int main()
{
	toolBooth c1,c2,c3,c4,c5;
	c1.payingCar();
	c2.payingCar();
	c3.nopaycar();
	c4.payingCar();
	c5.nopaycar();
	
	toolBooth::display();
	
}

