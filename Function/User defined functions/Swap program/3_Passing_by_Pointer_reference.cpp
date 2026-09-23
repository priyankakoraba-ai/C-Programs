#include<iostream>
#include<iostream>
#include<conio.h>
void swap(int*,int*);
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Before calling the function a = "<<a<<" and b = "<<b<<endl;
    swap(&a, &b);
    cout<<"After calling the function a = "<<a<<" and b = "<<b<<endl;
    return 0;
}

void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
