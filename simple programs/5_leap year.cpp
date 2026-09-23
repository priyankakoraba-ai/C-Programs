#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int year;
    cout<<"Enter the year"<<endl;
    cin>>year;

    /*if(year%4==0 && year%100!=0 || year%400==0)
    {
        cout<<"It is a leap year"<<endl;
    }
    else
    {
        cout<<"It is not a leap year"<<endl;
    }*/

    if(year%100==0)
    {
        if (year%400==0)
        {
           cout<<"Its a leap year"<<endl;
        }    
    }
    else
    {
        cout<<"NOT CENTURY YEAR"<<endl;
    }
    return 0;
}