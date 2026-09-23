//To sort the elements in the array

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a[50], i, j, n, temp;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"The sorted elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<setw(5)<<a[i];
    }
    return 0;
}