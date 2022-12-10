#include<vector>
#include<iostream>
using namespace std;
main()
{

int arr[] = { 12, 3, 17, 8 };  // standard C array
vector<int> v(arr, arr+4);  // initialize vector with C array
for(int i=0;i<v.size();i++)
    {
           cout<<v[i]<<"\t";
}
}
