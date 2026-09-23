#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int Product(int, int);
int main()
{
    int a,b,c;
    cout<<"Enter the two numbers:"<<endl;
    cin>>a>>b;
    cout<<"The Product of two numbers:"<<Product(a,b)<<endl;
    // cout<<Product(4,5);
}

int Product(int x, int y)
{
    return x*y;
}