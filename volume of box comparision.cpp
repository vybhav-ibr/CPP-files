#include<iostream>
using namespace std;

class box
{
private:
int length, width, height;
public:
void getvalues()
{
cout<<"Enter the length, width and height of the box:"<<endl;
cin>>length;
cin>>width;
cin>>height;
}
int volume()
{
return length*width*height;
}
void compare(box &ob)
{
if(this->volume()>ob.volume())
{
cout<<"\nBox1 is larger";
}
else if(this->volume()<ob.volume())
{
cout<<"\nBox2 is larger";
}
else
{
cout<<"\nBoth the boxes are equal";
}
}

};
int main()
{
box b1;
b1.getvalues();
cout<<endl;
box b2;
b2.getvalues();

b1.compare(b2);
}
