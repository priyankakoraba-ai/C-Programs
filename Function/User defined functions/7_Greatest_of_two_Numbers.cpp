#include<iostream>
#include<conio.h>
#include<iomanip>
int greatestnum(int,int);
using namespace std;

int main()
{
    int a,b;
    
    cout<<"Enter the Number of two numbers:"<<endl;
    cin>>a>>b;
    cout<<greatestnum(a,b)<<endl;   
    return 0;
}

int greatestnum(int x, int y)
{
    if(x>y)
    {
        cout<<"Greatest Number is : ";
        return x;
    }   
    else
    {
        cout<<"Greatest Number is : ";
        return y;
    }
}