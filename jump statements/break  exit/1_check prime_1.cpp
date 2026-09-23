//Check the given number is primeor not;

#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"It is not a Prime"<<endl;
            break;   
        }
    }
    if(i==n)
    {
        cout<<"It is a Prime"<<endl;
    }
    return 0;
}