#include<iostream>
#include<conio.h>
#include<iomanip>
void add(int, int);
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the two numbers:"<<endl;
    cin>>a>>b;
    add(a,b);
    return 0;
}

void add(int x, int y)
{
    int sum;
    sum=x+y;
    cout<<"The Sum of two numbers is :"<<sum<<endl;
}


