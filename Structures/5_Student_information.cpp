#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
using namespace std;
struct info
{
    int regno;
    string name;
    float perc;
};
int main()
{
    info s[50];
    int i, n, l;
    cout<<"Enter the number of the student: "<<endl;
    cin>>n;
   
    cout<<"Enter the following details Of the students:" <<endl;
    for(i=0;i<n;i++)
    {
       
        cout<<"register Number : ";
        cin>>s[i].regno;
        cout<<"Name            : ";
        cin>>s[i].name;
        cout<<"Percentage      : ";
        cin>>s[i].perc;
        cout<<endl;
    }

    cout<<"Student Information: "<<endl;
    cout<<setw(30)<<"Reg.No"<<setw(20)<<"Name"<<setw(20)<<"Perc"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<setw(30)<<s[i].regno<<setw(20)<<s[i].name<<setw(20)<<s[i].perc<<endl;
    }
    return 0;
}
