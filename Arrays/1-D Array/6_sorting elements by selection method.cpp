
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i, j, temp, n;
    int a[50];
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    } 

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<"The sorted elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<setw(4)<<a[i];
    }
    return 0;
}