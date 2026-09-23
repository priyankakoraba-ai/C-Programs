#include<iostream>
void Prime(int);
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to check Prime or not:"<<endl;
    cin>>n;
    Prime(n);
    return 0;
}

void Prime(int x)
{
    int i, flag=1;
    for(i=2;i<=x/2;++i)
    {
        if(x%i==0)
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
        cout<<"It is Not Prime."<<endl;
    }
}