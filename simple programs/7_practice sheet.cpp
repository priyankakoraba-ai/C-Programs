#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char choice;
    cout<<"Enter the choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 'A':cout<<"Grade A\n";
        case 'B':cout<<"Grade B\n";
        case 'C':cout<<"Grade C\n";
            break;
        case 'D':cout<<"Grade D\n";
        default:cout<<"Grade F\n"; 
    }
}