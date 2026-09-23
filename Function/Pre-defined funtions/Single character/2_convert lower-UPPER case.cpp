#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    char ch;
    cout<<"type-in a character:"<<endl;
    ch=cin.get();
    if(isupper(ch))
    {
        ch=tolower(ch);
        cout<<"The lower-case character is: ";
        cout.put(ch);
    }

    else
    {
        if(islower(ch))
        {
            ch=toupper(ch);
            cout<<"The UPPER-case character is: ";
            cout.put(ch);
        }
        else
        {
            cout<<"It is not an alphabet."<<endl;
        }
    }
    
    return 0;
}