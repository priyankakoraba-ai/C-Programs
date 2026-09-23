#include<iostream>
#include<conio.h>
#include<iomanip>
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
using namespace std;
 int main()
 {
    int num1, num2;
    cout<<"Enter the two numbers: "<<endl;
    cin>>num1>>num2;
    cout<<"Before interchanging num1="<<num1<<" and num2="<<num2<<endl;
    swap(&num1, &num2);
    cout<<"After interchanging num1="<<num1<<" and num2="<<num2<<endl;
    return 0;
 }