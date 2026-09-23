#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

struct time
{
	int h;
	int m;
}t1, t2, t3;

struct time (sum(struct time t1, struct time t2));
void show(struct time t);

int main(){
   struct time t3;
   cout<<"Enter the first Time in hours and minutes : "<<endl;
   cin>>t1.h>>t1.m;
   cout<<"Enter the second Time in hours and minutes : "<<endl;
   cin>>t2.h>>t2.m;
    cout<<"First Time: ";
    show(t1);
    cout<<"Second Time: ";
    show(t2);
    t3=sum(t1, t2);
    cout<<"The sum of two periods: ";
    show(t3);
    return 0;
}

struct time (sum( struct time t1, struct time t2))
{
   struct time total;
    total.h=(t1.h+t2.h)+(t1.m+t2.m)/60;
    total.m=(t1.m+t2.m)%60;
    return (total);
}

void show (struct time t)
{
    cout<<t.h<<" Hours and "<<t.m<<" minutes"<<endl;
}
