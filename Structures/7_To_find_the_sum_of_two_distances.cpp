#include<iostream>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct destance
{
    int feet;
    float inches;
};

int main(){
    destance d1, d2, d3;
    cout<<"Enter the first destance in feet and inches: "<<endl;
    cin>>d1.feet>>d1.inches;  
    cout<<"Enter the second destance in feet and inches: "<<endl;
    cin>>d2.feet>>d2.inches;
    d3.inches=d1.inches+d2.inches;
    d3.feet=0.0;
    if(d3.inches>12.0)
    {
        d3.inches-=12.0;
        d3.feet++;
    }

    d3.feet+=d1.feet+d2.feet;

    cout<<"The sum of two destances is: "<<endl;
    cout<<d1.feet<<"\' - "<<d1.inches<<"\" + ";
    cout<<d2.feet<<"\' - "<<d2.inches<<"\" = ";
    cout<<d3.feet<<"\' - "<<d3.inches<<"\""<<endl;  

    return 0;
}