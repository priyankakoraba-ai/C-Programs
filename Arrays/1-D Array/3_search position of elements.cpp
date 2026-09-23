#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    int a[50], i, n, ele, pos;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the search"<<endl;
    cin>>ele;
    pos=-1;
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            pos=i;
            break;
        }
    }

    if(pos>=0)
    {
        cout<<"The element "<<ele<<" is present at position "<<pos<<endl;
    }
    else
    {
        cout<<"The element "<<ele<<" is not present"<<endl;
    }
    return 0;
}