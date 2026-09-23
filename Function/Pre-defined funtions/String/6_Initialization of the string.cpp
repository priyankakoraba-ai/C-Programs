#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
    char st[]={'E','m','p','r','\0'};
    int l;
    l=strlen(st);
    cout<<l<<endl;
    cout.write(st, l);
}