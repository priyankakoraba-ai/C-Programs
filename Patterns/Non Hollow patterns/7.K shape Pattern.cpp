#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main ()
{
    int i, j, n ;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    cout<<endl;

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}