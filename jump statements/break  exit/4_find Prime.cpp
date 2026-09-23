//To Find whether the given number is Prime Or not;

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, n, status;
    cout<<"Enter the numbr"<<endl;
    cin>>n;
    status=1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
      {
            status=0;
            cout<<"It is not a Prime number"<<endl;
            break;
       }
     }
    if (status)
    {
        cout<<"It is a Prime number"<<endl;
    }
   return 0;
   getch();
}