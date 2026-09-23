#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
using namespace std;
void copying(char *, const char *);

int main()
{
    char s[50], d[50];
    // system("cls");
    cout << "Enter the string: ";
    cin.getline(s, 50);
    cout << "String length=" << strlen(s) << endl;

    copying(d, s);
    cout << "\nThe copied string is: " << d << endl;
    return 0;
}

void copying(char *d, const char *s)
{
    for (; *s != '\0'; s++, d++)
    {
        cout<<"s= "<<s<<endl<<" ";
        cout<<"*s= "<<*s<<endl;
        *d = *s;
        //cout<<"d= "<<d<<endl;
        cout<<"\t *d= "<<*d<<endl;
    }
    *d = '\0';
}