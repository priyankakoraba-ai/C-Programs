#include<iostream>
#include<iomanip>
#include<conio.h>

void read(int *);
void sort(int *);
void print(int *);
int n;
using namespace std;

int main(){
    int a[50];
    cout<<"How Many Elements? "<<endl;
    cin>>n;
    read(a);
    sort(a);
    print(a);
    return 0;
}
void read(int b[])
{
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
}

void sort(int c[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(c[j]>c[j+1])
            {
                int temp;
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
}

void print(int d[])
{
    cout<<"The sorted elements are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<setw(4)<<d[i];
    }
}
