#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int i, n, a[50], largest, secLargest;
    cout<<"How many numbers?"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    if(a[0]>a[1])
    {
        largest=a[0];
        secLargest=a[1];
    }
    else
    {
        largest=a[1];
        secLargest=a[0];
    }

    for(i=2;i<n;i++)
    {
        if(a[i]>largest)
        {
            secLargest=largest;
            largest=a[i];
        }
        else
        if(a[i]>secLargest)
        {
            secLargest=a[i];
        }
    }
    cout<<"Largest="<<largest<<endl;
    cout<<"Second Largest="<<secLargest<<endl;
    return 0;
}