#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
   char f[50], s[50], third[50];
   cout<<"Enter the first string:"<<endl;
   cin.getline(f, 50);
   cout<<"Enter the second string:"<<endl;
   cin.getline(s, 50);
   cout<<"\n\n"<<"first= "<<f<<endl;
   cout<<"\n"<<"second= "<<s<<endl;
   cout<<"\n And also first string is copied to third string\n i.e,: third=";
   cout<<strcpy(third, f);
   cout<<"\nNow second string is copied to first string\n i.e,: first=";
   cout<<strcpy(f, s);
   cout<<"\n\nsecond="<<s;
   return 0;
}