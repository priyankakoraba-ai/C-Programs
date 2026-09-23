//program to print the value of i:

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int n, i;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i==n/2)
        {
            break;
        }
        cout<<setw(5)<<i;
    }
    cout<<"\nEnd Of loop"<<endl;
    getch();
}