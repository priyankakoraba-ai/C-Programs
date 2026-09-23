//To Find 

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int a[50], i, n;
    int sum;
    float avg;
    cout<<"How many elements\?"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    cout<<"The Sum= "<<sum<<endl;
    cout<<"The Average= "<<avg;
    return 0;
}