#include<iostream>
int Prime(int);
using namespace std;

int main(){
    int flag, n;
    cout<<"Enter the number to check Prime or Not: ";
    cin>>n;
    flag=Prime(n);
    if(flag)
    {
        cout<<"It is not Prime."<<endl;
    }
    else
    {
        cout<<"It is Prime."<<endl;
    }
    return 0;
}
int Prime(int x)
{
    int i;
    for(i=2;i<=x/2;++i)
    {
        if(x%i==0)
        {
            return 1;
        }
    }
    return 0;
}