#include<iostream>
#include<iomanip>
using namespace std;
using namespace std;
int main()
{
void swap(int, int);
    int a, b;
    cout<<"Enter the two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Before calling the funtion: a = "<<a<<" and b = "<<b<<endl;
    swap(a, b);
    cout<<"After calling the function: a = "<<a<<" and b = "<<b<<endl;
    return 0;
}

void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
