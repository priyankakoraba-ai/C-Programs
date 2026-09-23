#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i, n;
    cout<<"enter the limit"<<endl;
    cin>>n;
    i=1;
    do
    {
        cout<<setw(4)<<i;
        i=i+2;
    }while(i<=n);
    return 0;
}