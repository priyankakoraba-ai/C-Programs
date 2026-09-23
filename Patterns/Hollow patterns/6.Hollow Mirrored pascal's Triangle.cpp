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
        for(k=i;k<=n;k++)
        {
            cout<<" ";
        }

        if(i==1||i==2)
        {
            cout<<"*";
            if(i==2)
            {
                cout<<"*";
            }
        }

        else
        {
            cout<<"*";
            for(j=1;j<i-1;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    //Lower Part of the pattern
    for(i=n-1;i>=1;i--)
    {
        for(k=i;k<=n;k++)
        {
            cout<<" ";
        }

        if(i==1||i==2)
        {
            cout<<"*";
            if(i==2)
            {
                cout<<"*";
            }
        }

        else
        {
            cout<<"*";
            for(j=1;j<i-1;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}