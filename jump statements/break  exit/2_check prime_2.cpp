//To find whether the given number is Prime or not:
#include<iostream>
using namespace std;
int main()
{
    int n, i, status;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    status=1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            status=0;
            cout<<"It is not a Prime"<<endl;
            break;
        }
    }
    if(status)
    {
        cout<<"It is a Prime"<<endl;
    }
    return 0;
}