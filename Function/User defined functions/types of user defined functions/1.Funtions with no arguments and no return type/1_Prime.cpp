#include<iostream>
void Prime();
using namespace std;

int main(){
    Prime();
    return 0;
}

void Prime()
{
    int i, n, flag=1;
    cout<<"Enter the Number to check whether it is Prime or Not:  ";
    cin>>n;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }

    if(flag)
    {
        cout<<"It is a Prime Number."<<endl;
    }
    else
    {
        cout<<"It is not a Prime:"<<endl;
    }
}