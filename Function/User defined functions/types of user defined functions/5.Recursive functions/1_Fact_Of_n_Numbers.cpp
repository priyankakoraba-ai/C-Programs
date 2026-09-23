#include<iostream>
int factorial(int);
#include<iomanip>
using namespace std;

int main()
{
    int n, fact;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    fact=factorial(n);
    cout<<n<<"! = "<<fact<<endl;
    return 0;
}

int factorial(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return(x*factorial(x-1));
    }
}

