// To count number of vowels &  consonants in a string;
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    char s[50];
    int l, i, cons=0, vow=0;
    cout<<"Enter the string:"<<endl;
    cin.getline(s, 50);
    l=strlen(s);
    cout<<"The Legth of the string is: "<<l<<endl;
    for(i=0;i<l;i++)
    {
        if(isalpha(s[i]))
        {
            switch(toupper(s[i]))
            {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                vow++;
                break;
                default:
                cons++;
                break;
            }
        }
    }
    cout<<"\nThe Number of vowels in a given string is: "<<vow<<endl;
    cout<<"The number of consonants in a given string is: "<<cons<<endl;

    return 0;
}