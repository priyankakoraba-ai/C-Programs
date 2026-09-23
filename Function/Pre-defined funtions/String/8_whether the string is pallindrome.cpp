//To determine whether the string is Pallidrome or not:

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char s[50], r[50];
    cout<<"Enter the string:"<<endl;
    cin.getline(s, 50);

    strcpy(r, s);           //Coppy the characters of the string s to r;
    strrev(r);              //Reverse the characters of the string r;

    if(strcmpi(s, r)==0)
    {
        cout<<"It is a Pallidrome:"<<endl;
    }

    else
    {
        cout<<"It is not pallindrome."<<endl;
    }
    return 0;
}