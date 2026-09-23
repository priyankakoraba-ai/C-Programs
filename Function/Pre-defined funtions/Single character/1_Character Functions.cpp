#include<iostream>
#include<conio.h>
#include<iomanip>
#include<ctype.h>
using namespace std;
int main()
{
    char ch;
    int n;
    cout<<"type-in a character:"<<endl;
    cin.get(ch);
     //character functions:
    n=ispunct(ch);
   
    cout<<"toascii('"<<ch<<"'):-->"<<toascii(ch)<<endl;
   
    cout<<"ispunct('"<<ch<<"'):-->"<<n<<endl;

    cout<<"isalpha('"<<ch<<"'):-->"<<isalpha(ch)<<endl;

    cout<<"isalnum('"<<ch<<"'):-->"<<isalnum(ch)<<endl;

    cout<<"isupper('"<<ch<<"'):-->"<<isupper(ch)<<endl;

    cout<<"islower('"<<ch<<"'):-->"<<islower(ch)<<endl;
    
    cout<<"isdigit('"<<ch<<"'):-->"<<isdigit(ch)<<endl;
    
    cout<<"isspace('"<<ch<<"'):-->"<<isspace(ch)<<endl;

    if(isupper(ch))
    {
        cout<<"tolower('"<<ch<<"'):-->";
        ch=tolower(ch);
        cout.put(ch);
    }

    else
    {
        if(islower(ch))
        { 
            cout<<"toupper('"<<ch<<"'):-->";
            ch=toupper(ch);
            cout.put(ch);
        }
        else
        {
            cout<<"It is a special character"<<endl;
        }
    }
  
    /*if(isalpha(ch))
    {
    cout<<"toascii('"<<ch<<"') = "<<toascii(ch)<<endl;
    }
    else
    {
        if(isdigit(ch))
        {
            cout<<"It is a degit "<<endl;
            cout<<"toascii('"<<ch<<"') = "<<toascii(ch)<<endl;
        }
        else{
            cout<<"It is special character"<<endl;
        }

    }*/
    return 0;
   
}