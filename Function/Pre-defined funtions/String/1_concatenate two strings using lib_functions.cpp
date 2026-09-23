#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
    char f[50], s[50];
    cout<<"Enter the first string:"<<endl;
    cin.getline(f, 50);
    cout<<"Enter the second string:"<<endl;
    cin.getline(s, 50);

    cout<<"\nThe Concatenated String is:";
    cout<<strcat(f, s)<<endl;
    return 0;

}