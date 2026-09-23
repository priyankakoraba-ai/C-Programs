#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int i, j, k, n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=i;k<=n;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--)
    {
        for(k=i;k<=n;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}