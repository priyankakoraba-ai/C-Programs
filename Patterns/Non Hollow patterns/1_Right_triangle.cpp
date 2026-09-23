//To Print Right Triangle pattern

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n, i, j,k;
    cout<<"Enter the number of rows:";
    cin>>n;
   /*for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }*/
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        /*for(k=1;k<=i;k++)
        {
            cout<<" ";
        }*/
        cout<<"\n";
    }

    return 0;

}