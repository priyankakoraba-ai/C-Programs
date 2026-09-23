#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
    char s[30];
    int l;
    cout<<"Enter the string :";
    cin.getline(s, 30);
    l=strlen(s);
    cout<<"\nThe Given string is:";
    cout.write(s, l);
    return 0;
}