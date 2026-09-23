#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int a, b, r;
    cout<<"Enter the two numbers";
    cin>>a>>b;
    cout<<"The common divisors of"<<a<<" and "<<b<<" are "<<a<<" "<<b;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
        cout<<setw(4)<<r;  
    }
    return 0;
}