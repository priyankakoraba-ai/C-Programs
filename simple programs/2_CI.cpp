//To find the compound Interest of a given principle amount:
#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
float pri, priamt, rate, ci, amt;
int year, time;
cout<<"Enter the Principle amount, Rate of interest and Time"<<endl;
cin>>pri>>rate>>time;
year=1;
priamt=pri;
while(year<=time)
{
amt=pri*(1+rate/100);
pri=amt;
year++;
}
ci=amt-priamt;
cout<<"The compound interest is="<<ci<<endl;
cout<<"The Net amount is="<<amt<<endl;
getch();
return 0;
}