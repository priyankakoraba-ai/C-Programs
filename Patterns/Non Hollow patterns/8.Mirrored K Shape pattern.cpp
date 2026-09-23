#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    int i, j, k, n;
    cout<<"Ener the number of rows:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       for(k=1;k<=i;k++)
       {
        cout<<" ";
       } 

       for(j=i;j<=n;j++)
       {
        cout<<"*";
       }
       cout<<endl;
    }
    for(i=n-1;i>=1;i--)
    {
       for(k=1;k<=i;k++)
       {
        cout<<" ";
       } 

       for(j=i;j<=n;j++)
       {
        cout<<"*";
       }
       cout<<endl;
    }
    return 0;
}