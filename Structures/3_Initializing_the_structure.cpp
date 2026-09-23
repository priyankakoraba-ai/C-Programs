#include<iostream>
#include<string.h>
#include<conio.h>
#include<iomanip>
using namespace std;

struct employee
{
    int regno;
    char name[20];
    char designation[15];
    float salary;
};

int main(){
    employee emp1={
                    1234,
                    "Kartik",
                    "Manager",
                    10500.50
                  };

    cout<<"Information of Employee:"<<endl;
    cout<<"Register number of the employee : "<<emp1.regno<<endl;
    cout<<"Name of the employee            : "<<emp1.name<<endl; 
    cout<<"Designation of the employee     : "<<emp1.designation<<endl; 
    cout<<"Salary of the employee          : "<<emp1.salary<<endl; 
    return 0;
}