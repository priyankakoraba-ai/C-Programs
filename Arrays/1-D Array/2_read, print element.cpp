// To read the elements into the array & Printing the elements;

#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    int a[50], n, i;
    cout<<"How many elements?"<<endl;
    cin>>n;
    cout<<"Enter the elements:";
    i=0;
    while(i<n)
    {
        cin>>a[i];
        i++;
    }
    cout<<"The Elements are:";
    for(i=0;i<n;i++)
    {
        cout<<setw(4)<<a[i];
    }
    // cout<<" "<<a[1]<<" "<<a[n-1]<<endl;
    
    return 0;
}

