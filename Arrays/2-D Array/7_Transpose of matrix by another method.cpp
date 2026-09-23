#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int a[5][5], m, n, i, j;
    cout<<"Enter the order:"<<endl;
    cin>>m>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The transposed matrix is:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<setw(4)<<a[j][i];
        }
        cout<<endl;
    }
    return 0;
}