#include<iostream>
void Sum_Avg(int, int, int, int, int, int);
using namespace std;

int main(){
    int a, b, c, d, e, f;
    cout<<"Enter the Marks Of the following Subjects:"<<endl;
    cout<<"Kannada = ";
    cin>>a;
    cout<<"English = ";
    cin>>b;
    cout<<"IT = ";
    cin>>c;
    cout<<"Maths = ";
    cin>>d;
    cout<<"Science = ";
    cin>>e;
    cout<<"Social Science = ";
    cin>>f;
    Sum_Avg(a,b,c,d,e,f);
    return 0;
}

void Sum_Avg(int p, int q, int r, int s, int t, int u)
{
    int Sum;
    float avg;
    Sum=p+q+r+s+t+u;
    avg=(float)Sum/625*100;
    cout<<"The Total Marks = "<<Sum<<endl;
    cout<<"The Percentage = "<<avg<<endl;
}