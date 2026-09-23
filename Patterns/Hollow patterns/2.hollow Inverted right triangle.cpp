#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int i, j, n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i==1||i==n)
        {
            for(j=1;j<=i;j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            cout<<"*";
            for(j=1;j<=2*i-3;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}