#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void copying(char *, const char *);
int main()
{
    char s[50], d[50];
    system("cls");
    cout<<"Enter the String: ";
    cin.getline (s, 50);
    copying(d, s);
    cout<<"The copied String: "<<d<<endl;
    return 0;
}

void copying(char *d, const char *s)
{
    for(;*s!='\0'; s++, d++)
    {
    *d=*s;
    }
    *d='\0';
}