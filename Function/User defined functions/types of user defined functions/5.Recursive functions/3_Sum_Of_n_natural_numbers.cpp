#include<iostream>
#include<iomanip>
#include<conio.h>
int Sum(int);
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Limit of the numbers can be calculated: "<<endl;
    cin>>n;
    cout<<"The Sum of the "<<n<< " numbers : "<<Sum(n);
    return 0;
}

int Sum(int x)
{
    if(x==1)
    return 1;
    else{
        return(x+Sum(x-1));
    }
}