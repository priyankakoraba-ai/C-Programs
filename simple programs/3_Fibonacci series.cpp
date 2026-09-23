#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int i, n, first, second, third;
    cout<<"Enter The number of rows"<<endl;
    cin>>n;
    first=0;
    second=1;
    cout<<"The Fibonacci series of the number "<<n<<" is: "<<first<<" "<<second;
    third=first+second;
    for(i=2;i<=n;i++)
    {
        cout<<setw(4)<<third;
        first=second;
        second=third;
        third=first+second;
    }
    
    return 0;
}