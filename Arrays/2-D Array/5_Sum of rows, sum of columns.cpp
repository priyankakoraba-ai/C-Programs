#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int a[5][5], i, j, rsum, csum, m, n;
    cout<<"Enter the order "<<endl;
    cin>>m>>n;
    cout<<"Enter the elements of the matrix:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    //Calculation Process for rows;

    for(i=0;i<m;i++)
    {
        rsum=0;
        for(j=0;j<n;j++)
        {
            rsum+=a[i][j];
        }
        cout<<"Sum of row-no:"<<i+1<<"="<<rsum<<endl;
    }
    cout<<endl;
     //Calculation Process for columns;

    for(i=0;i<n;i++)
    {
        csum=0;
        for(j=0;j<m;j++)
        {
            csum+=a[j][i];
        }
        cout<<"Sum of column-no:"<<i+1<<"="<<csum<<endl;
    }
    return 0;
}
