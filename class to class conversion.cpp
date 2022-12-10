#include <bits/stdc++.h>
using namespace std;

class Classone {
	string a = "Hello";

public:
	string get_string()
	{
		return (a);
	}
	void display()
	{
		cout << a << endl;
	}
};

class Classtwo {
	string b;

public:
	void operator=(Classone a)
	{
		b = a.get_string();
	}
	void display()
	{
		cout << b << endl;
	}
};

int main()
{
	Classone a;
	Classtwo b;
	b = a;
	a.display();
	b.display();

	return 0;
}

