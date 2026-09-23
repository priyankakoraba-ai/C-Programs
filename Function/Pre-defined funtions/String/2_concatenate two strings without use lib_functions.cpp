//To concatenate two strings Without using Library functions;
#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
    char f[50], s[50];
    int L1, L2, i;
    cout<<"Enter the first string :"<<endl;
    cin.getline(f, 50);
    cout<<"Enter the second string:"<<endl;
    cin.getline(s, 50);

    L1=strlen(f);
    L2=strlen(s);

    for(i=0;i<L2;i++)
    {
        f[L1+i]=s[i];
    }
    f[L1+L2]='\0';      //Adding null caracter to the end fo first string;

    cout<<"The concatenated string is:";
    cout.write(f, L1+L2);

    cout<<endl<<L1<<" "<<L2;
    return 0;

}