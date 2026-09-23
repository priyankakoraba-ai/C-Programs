#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int i, j, n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
         if(i==1||j==1||i==n||j==n)
         {
            cout<<setw(2)<<"*";
         }   
         else{
            cout<<"  ";
         }
        }
        cout<<"\n";
    }
    return 0;
}