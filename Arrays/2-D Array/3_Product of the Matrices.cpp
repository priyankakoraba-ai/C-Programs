#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int a[5][5], b[5][5], p[5][5], i, j, m1, n1, m2, n2, k;
    cout<<"Enter the order of first matrix:"<<endl;
    cin>>m1>>n1;
    cout<<"Enter the order of second matrix:"<<endl;
    cin>>m2>>n2;
    cout<<"\nEnter the elements of first matrix:"<<endl;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of second matrix:"<<endl;
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            cin>>b[i][j];
        }
    }

    if(n1==m2)
    {
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
                p[i][j]=0;
                for(k=0;k<n1;k++)
                {
                    p[i][j]=p[i][j]+a[i][k]*b[k][j];
                }
            }
        }

        cout<<"The resultant matrix is..."<<endl;
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
                cout<<setw(4)<<p[i][j];
            }
            cout<<endl;
        }
    }

    else
    {
        cout<<"The matrices are not compatible..."<<endl;
    }
return 0;
}