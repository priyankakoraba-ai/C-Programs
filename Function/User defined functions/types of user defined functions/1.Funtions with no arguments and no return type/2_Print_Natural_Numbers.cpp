#include<iostream>
#include<iomanip>
void natural();
using namespace std;

int main(){
    natural();
    return 0;
}

void natural()
{
    int i, Limit;
    cout<<"Enter the Limit to Prime Natural Numbers: ";
    cin>>Limit;
    for(i=0;i<=Limit;i++)
    {
        cout<<setw(4)<<i;
    }
}