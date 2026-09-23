#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
    class student
    {
        private:
            int Rollno;
            char Name[20];
            char course[10];
            char gender[10];
            int regno;
        
        public:
            void get_data();
            void Display_data();
    };

    void student::get_data()
    {
        cout<<"Enter Name= ";
        cin.getline(Name, 20);
        cout<<"Enter Course= ";
        cin.getline(course, 10);
        cout<<"Enter Gender= ";
        cin.getline(gender, 10);
        cout<<"Enter Roll Number= ";
        cin>>Rollno;
        cout<<"Enter Register Number= ";
        cin>>regno;
    }

    void student ::Display_data()
    {
        cout<<"\tRoll Number \t Name\t\tCourse\t\tGender\t\tRegister Number"<<endl;
        cout<<"\t"<<Rollno<<"\t\t"<<Name<<"\t"<<course<<"\t\t"<<gender<<"\t\t"<<regno<<endl;
    }

int main(){
    system("cls");
    student s1;
    s1.get_data();
    s1.Display_data();
    return 0;
}