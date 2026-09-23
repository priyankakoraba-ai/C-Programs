#include<iostream>
#include<iomanip>
#include<conio.h>
int fibbonacci(int);
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<fibbonacci(n)<<endl;

    return 0;
}

int fibbonacci(int x)
{
    if(x==1)
    {
        return 1;
    }
    if(x==2)
    {
        return 1;
    }
else
{
    return(fibbonacci(x-1)+fibbonacci(x-2));
}

}