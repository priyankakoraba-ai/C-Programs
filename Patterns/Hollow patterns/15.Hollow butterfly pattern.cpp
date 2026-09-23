#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, k, n;
    cout << "Enter the number of rows:" << endl;
    cin >> n;
    for (i = n; i>=1; i--)
    {
        for (k = i; k <= n; k++)
        {
            if(k==i||k==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
          
        }

        for(j=1;j<=2*i-1;j++)
        {   
            if(j==1||j==2*i-1)
            {
                cout<<" ";
            }
            else
            {
                cout<<" ";
            }
        }
        for (k = i; k <= n; k++)
        {
            if(k==i||k==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
          
        }
        cout<<endl;
    }

    //Lower Part of the pattern
    for (i =1; i<=n; i++)
    {
        for (k = i; k <= n; k++)
        {
            if(k==i||k==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
          
        }

        for(j=1;j<=2*i-1;j++)
        {    
                cout<<" ";
        }
        for (k = i; k <= n; k++)
        {
            if(k==i||k==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
          
        }
        cout<<endl;
    }
    return 0;
}
