#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

void difference(int, int);
int main()
{
    int r, c;
    cout<<"Enter the two numbers:"<<endl;
    cin>>r>>c;
    cout<<"The Difference between "<<r<<" and "<<c<<" = "<<endl;
    difference(r, c);
    return 0;

}

void difference(int x, int y)
{
    int d=x-y;
    cout<<d;

}