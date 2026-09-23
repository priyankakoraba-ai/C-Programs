#include<iostream>
int Prime();
using namespace std;

int main(){
    int i, flag=1, n;
    n=Prime();
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
        cout<<"It is Prime."<<endl;
    }
    else{
        cout<<"It is not Prime."<<endl;
    }
    
    return 0;
}

int Prime()
{
    int x;
    cout<<"Enter the number to check Prime: ";
    cin>>x;
    return x;
}