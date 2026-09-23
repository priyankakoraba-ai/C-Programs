#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
float expo(float, int);
int main()
{
    int base, power;
    cout<<"Enter the base & Power : "<<endl;
    cin>>base>>power;
    cout<<setprecision(3)<<base<<"^"<<power<<" = "<<expo(base, power)<<endl;
    return 0;
}

float expo(float a, int n)
{
    if(a==0)
    {
        return 0.0;
    }

    else
    {
        if(n==0)
        {
            return 1.0;
        }
        else
        {
            if(n>0)
            {
                return(a*expo(a, n-1));
            }
            else
            {
                return(1/a*expo(a, n+1));
            }
        }
    }
}
