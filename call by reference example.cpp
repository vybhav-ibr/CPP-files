#include<iostream>
using namespace std;
void swapx(int*, int*);
int main()
{
    int a = 10, b = 20;
    int *pt1= &a, *pt2= &b;
    swapx(pt1,pt2);

    printf("a=%d b=%d\n", a, b);

    return 0;
}
void swapx(int* x, int* y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;

    printf("x=%d y=%d\n", *x, *y);
}
