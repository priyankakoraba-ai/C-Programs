#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int a[5][5], b[5][5], s[5][5], m1, n1, m2, n2, i, j;
    cout<<"Enter the order of first Matrix:"<<endl;
    cin>>m1>>n1;

    cout<<"\nEnter the order of second Matrix:"<<endl;
    cin>>m2>>n2;
    cout<<"\nEnter the elements of first matrix:"<<endl;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter the elements of the second matrix:"<<endl;
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            cin>>b[i][j];
        }
    }

    if(m1==m2&&n1==n2)
    {
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                s[i][j]=a[i][j]+b[i][j];
            }
        }

        cout<<"\nThe resultant matrix is:"<<endl;

        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                cout<<setw(4)<<s[i][j];
            }
            cout<<endl;
        }
    }

    else{
        cout<<"The Matrices are not compatible....."<<endl;
    }
    return 0; 
}