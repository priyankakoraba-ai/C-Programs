//Acceessing the information of students & Printing theinformation;

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
struct student
{
    int regno;
    char name[15];
    char combination[5];
    float perc;
};

int main()
{
    student st;

    cout<<"Enter the Name of the student: "<<endl;
    cin.getline(st.name, 15);
    cout<<"Enter the register number of the student: "<<endl;
    cin>>st.regno;
    cout<<"Enter the Percentage of the student: "<<endl;
    cin>>st.perc;

    cout<<endl<<"Student Information: "<<endl;
    cout<<"Register No : "<<st.regno<<endl;
    cout<<"Name        : "<<st.name<<endl;
    cout<<"Percentage  : "<<st.perc<<" %"<<endl;
    
    return 0;
}