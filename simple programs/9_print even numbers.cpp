#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i, n;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    i=2;
    while(i<=n)
    {
        cout<<setw(4)<<i;
        i=i+2;
    }
    return 0;
}