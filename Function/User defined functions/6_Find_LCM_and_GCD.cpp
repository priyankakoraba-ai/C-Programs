#include<iostream>
#include<conio.h>
#include<iomanip>
int a, b;
using namespace std;
int main()
{
    int gcd(int, int);
    int product, g, lcm;
    cout<<"Enter the two numbers:"<<endl;
    cin>>a>>b;
    g=gcd(a, b);
    product=a*b;
    lcm=product/g;
    cout<<"GCD= "<<g<<endl;
    cout<<"LCM= "<<lcm<<endl;
    return 0;    
}

int gcd(int a, int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}