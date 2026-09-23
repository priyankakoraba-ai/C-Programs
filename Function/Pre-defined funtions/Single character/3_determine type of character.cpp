#include<iostream>
#include<conio.h>
#include<iomanip>
#include<ctype.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Type-in a character:"<<endl;
    ch=cin.get();
    if((ch>='A' && ch<='Z')||(ch>='a'&& ch<='z'))
    {
        cout<<"It is an alphabet."<<endl;
    }
    else
    {
        if(ch>='0' && ch<='9')
        {
            cout<<"It is a degit"<<endl;
        }
        else
        {
            cout<<"It is spacial character."<<endl;
        }
    }
    return 0;
}