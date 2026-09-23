#include<iostream>
#include<conio.h>
#include<iomanip>
float nettamt(float, float, int);
float ci(float, float);
using namespace std;
int main()
{
    float priamt, netamt, rate, CI;
    int time;
    cout<<"Enter the Principle amount, rate of interest and time:"<<endl;
    cin>>priamt>>rate>>time;
    netamt=nettamt(priamt, rate, time);
    cout<<"The Nett Amount = "<<netamt<<endl;
    CI=ci(netamt,priamt);
    cout<<"The Compound Interest = "<<CI<<endl;
    return 0;
}

float nettamt(float p, float r, int t)
{
    float netamt=p;
    int year=1;
    for(year=1;year<=t;year++)
    {
        netamt=netamt*(1+r/100);
    }
    return netamt;
}


float ci(float netamt, float p)
{
    float ci;
    ci=netamt-p;
    return ci;
}