#include <iostream>
#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class account
{
private:
    int Acco_num;
    float balance;
    char acctype[20];
    char Name[15];

public:
    void get_data()
    {
        cout<<"Enter Account type: "<<endl;
        cin.getline(acctype, 20);
        cout<<"Enter Name: "<<endl;
        cin.getline(Name, 15);
        cout<<"Enter account Balance: "<<endl;
        cin>>balance;
        cout<<"Enter Account number: "<<endl;
        cin>>Acco_num;
    }
    void Show_data()
    {
        cout<<"\n\nAccount Number\t\t Holder name\t\t account type\t\t Balance"<<endl;
        cout<<Acco_num<<"\t\t"<<Name<<"\t\t"<<acctype<<"\t\t"<<balance<<endl;
    }
};

int main()
{
    account h1;
    system("cls");
    h1.get_data();
    h1.Show_data();
    return 0;
}