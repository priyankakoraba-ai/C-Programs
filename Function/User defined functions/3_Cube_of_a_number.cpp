#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int cube(int);
int main()
{   
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"The cube of "<<n<< " is = ";
    cout<<cube(n);
    return 0;
}

int cube(int x)
{
    return x*x*x;
}