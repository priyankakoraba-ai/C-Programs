#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int factorial(int);
int main()
{
    int fact, n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    fact=factorial(n);
    cout<<n<<"!="<<fact;
    return 0;
}

int factorial(int x)
{
    int f, i;
    f=1;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}