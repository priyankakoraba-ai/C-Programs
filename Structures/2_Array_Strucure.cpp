#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
using namespace std;
struct date
{
    int dayno;
    int month;
    int year;
};

struct info
{
    int regno;
    string name;
    date dob;
    date doa;
    float perc;
};
int main()
{
    info s[50];
    int n, i;
    cout<<"Enter the number of students: "<<endl;
    cin>>n;
    cout<<"Enter the following information of student: "<<endl;
    
    for(i=0;i<n;i++)
    {
        cout<<"Student : "<<i+1;
        cout<<"\nRegister Number : ";
        cin>>s[i].regno;
        cout<<"Name             : ";
        cin>>s[i].name;
        cout<<"Date of Birth     : ";
        cin>>s[i].dob.dayno;
        cin>>s[i].dob.month;
        cin>>s[i].dob.year;
        cout<<"Date of Admission : ";
        cin>>s[i].doa.dayno;
        cin>>s[i].doa.month;
        cin>>s[i].doa.year;
        cout<<"Percentage        : ";
        cin>>s[i].perc;
        cout<<endl;
    }    

    cout<<endl<<"Student Information: "<<endl;
    cout<<"Register_No"<<setw(16)<<"Name"<<setw(20)<<"Date of birth"<<setw(28)<<"Date of Admission"<<setw(20)<<"Percentage"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<s[i].regno<<setw(25);
        cout<<s[i].name<<setw(15);
        cout<<s[i].dob.dayno<<"-";
        cout<<s[i].dob.month<<"-";
        cout<<s[i].dob.year<<setw(15);
        cout<<s[i].doa.dayno<<"-";
        cout<<s[i].doa.month<<"-";
        cout<<s[i].doa.year<<setw(15);
        cout<<s[i].perc<<"\n";
    }    

    return 0;
}