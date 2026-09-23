#include<iostream>
#include<iomanip>
void swap(int&, int&);
#include<conio.h>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Before calling the function: a = "<<a<<" and b = "<<b<<endl;
    swap(a, b);
    cout<<"After calling the function: a = "<<a<<" and b = "<<b<<endl;
    cout<<&a<<endl<<&b<<endl;


    return 0;
}

void swap(int&x, int&y)
{
    int temp ;
    temp=x;
    x=y;
    y=temp;

    
}