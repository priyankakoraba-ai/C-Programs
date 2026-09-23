#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    int i, a, b;
    cout<<"Enter the values of a & b"<<endl;
    cin>>a>>b;
    cout<<"The leap years from a to b"<<endl;
    for(i=a;i<=b;i++)
    {
        if(i%4==0 && i%100!=0 || i%400==0)
        {
            cout<<setw(4)<<i<<endl;
        }
    }
    return 0;
}