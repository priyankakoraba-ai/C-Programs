#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>
using namespace std;
struct date
{
    int dayno;
    int month;
    int year;
};

struct student
{
    int regno;
    char name[15];
    date dob;
    date doa;
}s;

int main()
{
    cout<<"Enter the name of the student:"<<endl;
    cin.getline(s.name, 15);
    cout<<"Enter the register number of the student: "<<endl;
    cin>>s.regno;
    cout<<"Enter the date of birth of the student: "<<endl;
    cin>>s.dob.dayno>>s.dob.month>>s.dob.year;
    cout<<"Enter the ate of the admission: "<<endl;
    cin>>s.doa.dayno>>s.doa.month>>s.doa.year;

    cout<<"Student Information: "<<endl;
    cout<<"Register No   : "<<s.regno<<endl;
    cout<<"Name          : "<<s.name<<endl;
    cout<<"Date of Birth : "<<s.dob.dayno<<"-"<<s.dob.month<<"-"<<s.dob.year<<endl;
    cout<<"Date of Birth : "<<s.doa.dayno<<"-"<<s.doa.month<<"-"<<s.doa.year<<endl;
    return 0;
}