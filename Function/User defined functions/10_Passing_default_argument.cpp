#include<iostream>  
#include<conio.h>
#include<iomanip>        
using namespace std;

int main()
{
    float siInterest(float p, int t, float r);
    float priamt, si, rate;
    int t;
    cout<<"Enter the principle amount: "<<endl;
    cin>>priamt;
    cout<<"Enter the rate: "<<endl;
    cin>>rate;
    cout<<"Enter the time: "<<endl;
    cin>>t;
    si=siInterest(priamt, t, rate);
    cout<<"By passing principle and time: \t Simpleinterest = "<<si<<endl;
    rate=5;
    si=siInterest(priamt, t, rate);
    cout<<"By passing principle, time and rate of interest: \t Simpleinterest = "<<si<<endl;

    return 0;
}

float siInterest(float p, int t, float r)
{
    return ((p*t*r)/100);
}