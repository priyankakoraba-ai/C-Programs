#include<iostream>
using namespace std;
int main()
{
    int PocketMoney;
    cout<<"Enter the Pocket Money:";
    cin>>PocketMoney;
    for(int date=1;date<=30;date++)
    {
        if(date%2==0)
        {
            continue;
        }
        if(PocketMoney==0)
        {
            break;
        }
        cout<<date<<" Go out today:"<<endl;
        PocketMoney=PocketMoney-300;
    }
    return 0;
}