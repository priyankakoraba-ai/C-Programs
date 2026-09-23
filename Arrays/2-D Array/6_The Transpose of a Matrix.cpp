#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    int a[5][5], t[5][5], m, n, i, j;
    cout<<"Enter the order of the matrix:"<<endl;
    cin>>m>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        t[j][i]=a[i][j];
    }
    }

    cout<<"The transposed matrix is:"<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
    {
        cout<<setw(4)<<t[i][j];
    }
    cout<<endl;
    }

    return 0;
}
