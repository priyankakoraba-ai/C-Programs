#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
void f();
void g();
int x=10;
int main()
{
    int x=20;
    {
        int x=30;
        cout<<" In block inside main(): x="<<x<<endl;
    }
    cout<<"In main(): x="<<x<<endl;
    cout<<"In main: ::x="<<::x<<endl;
    f();
    g();
    return 0;
}

void g()
{
    x=40;
    cout<<"In g(): x="<<x<<endl;
}

void f()
{
    
    cout<<"In f(): x="<<x<<endl;
}
