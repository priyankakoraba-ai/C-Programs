#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
using namespace std;
    class employee
    {
        private:
            char Name[20];
            int age;
        public:
            void getdata()
            {
                cout<<"Enter The name: "<<endl;
                cin.getline(Name, 20);
                cout<<"Enter Age:"<<endl;
                cin>>age;
                despdata();
            }
            void despdata()
            {
                cout<<"\t Name\t\t Age"<<endl;
                cout<<"\t"<<Name<<"\t\t"<<age<<endl;
            }
    } supervisor[3];

int main(){
    system("cls");
    for(int i=0;i<3;i++)
    {
        supervisor[i].getdata();
    }
    return 0;
}