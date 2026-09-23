#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    int  i, j, m, n;
    cout<<"Enter the order"<<endl;
    cin>>m>>n;
    int a[m][n];
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"The elements are:\? "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<setw(4)<<a[i][j];
        }
        cout<<endl;
    }

    cout<<endl;

    cout<<a[0][0]<<endl;
    cout<<a[0][1]<<endl;
    cout<<a[0][2]<<endl;
    cout<<a[0][3]<<endl;
    cout<<a[0][4]<<endl;

    cout<<a[1][0]<<endl;
    cout<<a[1][1]<<endl;
    cout<<a[1][2]<<endl;
    cout<<a[1][3]<<endl;
    cout<<a[1][4]<<endl;


    return 0;
}