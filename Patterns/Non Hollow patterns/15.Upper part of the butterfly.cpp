#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int i, j, k, n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(k=i;k<n;k++)
        {
            cout<<"*";
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1||j==2*i-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(k=i;k<n;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}