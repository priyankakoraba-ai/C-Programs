#include<iostream>
#include<iostream>
#include<iomanip>
#include<conio.h>
void add_product(int&, int&);    
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the two numbers: "<<endl;
    cin>>a>>b;
    add_product(a, b);
    cout<<"The Sum of a and b is: "<<a<<endl;
    cout<<"The product d of a and b is: "<<b<<endl;

    return 0;
}

void add_product(int&x, int&y)
{
    int temp=x;
    x+=y;
    y*=temp;
}