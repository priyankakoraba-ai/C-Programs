#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    int i, j, k, n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(k=i;k<=n;k++)
        {
            cout<<" ";
        }

        if(i==1)
        {
            cout<<"*";
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
        cout<<"\n";
    }

    //Lower part of the pattern
    for(i=n-1;i>=1;i--)
    {
        for(k=i;k<=n;k++)
        {
            cout<<" ";
        }

        if(i==1)
        {
            cout<<"*";
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
        cout<<"\n";
    }
    return 0;
}