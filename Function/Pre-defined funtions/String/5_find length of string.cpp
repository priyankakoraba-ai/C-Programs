#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
    //To find Length of the string using Library funtion;
   /* char st[50];
    int l;
    cout<<"Enter the string:";
    cin.getline(st, 50);

    l=strlen(st);
    cout<<"The Length of the string is:"<<l<<endl;
    cout<<"The Given string is:";
    cout.write(st, l);*/
    
    //To find Length of the string without using Library funtion;
    char st[50];
    int i;
    cout<<"Enter the string:";
    cin.getline(st, 50);

   for(i=0;st[i]!='\0';i++)
   {
    cout<<" "<<i;
   }
   cout<<"\n The length of the string is:"<<i<<endl;
    return 0;

}