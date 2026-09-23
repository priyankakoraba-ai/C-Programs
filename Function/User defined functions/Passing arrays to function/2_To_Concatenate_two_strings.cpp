#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
void concatenate(char st[], char str[]);
using namespace std;
int main(){
    char s1[50], s2[50];
    cout<<"Enter the first string: "<<endl;
    cin.getline(s1, 50);
    cout<<"Enter the second string: "<<endl;
    cin.getline(s2, 50);

    concatenate(s1,s2);
    cout<<"The concatenated string = "<<s1<<endl;
    return 0;
}

void concatenate(char st[], char str[])
{
    int L1=strlen(st);
    int L2=strlen(str);
    for(int i=0;i<L2;i++)
    {
        st[L1+i]=str[i];
    }
    st[L1+L2]='\0';
}