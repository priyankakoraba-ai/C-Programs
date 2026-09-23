//To Print Mirrored Right Triangle Pattern;

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i, j, k, n;
    cout<<"Enter The number of rows"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=i;k<=n;k++)
        {
            cout<<"  ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}