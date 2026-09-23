// Print the Prime numbers in between the numbers a and b;
#include<iostream>
using namespace std;
int main()
{
    int a, b, num, i;
    cout<<"Enter the two numbers"<<endl;
    cin>>a>>b;
    cout<<endl;
    for(num=a;num<=b;num++)
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
        if(i==num)
        {
             cout<<i<<endl;
        }

    }
    return 0;
}