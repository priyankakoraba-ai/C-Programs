#include<iostream>
using namespace std;
int main()
{
    int i, limit;
    cout<<"Enter the Limit:"<<endl;
    cin>>limit;
    cout<<endl;
    for(i=1;i<=limit;i++)
    {
        //Print the numbers except the numbers which are divisible by 3;

        if(i%3==0)
        {
           continue;
        }
        cout<<i<<endl;

        //Print the numbers which are divisible by 3;
        // if(i%3!=0)
        // {
        //     continue;
        // }
        // cout<<i<<endl;
    }
    return 0;
}