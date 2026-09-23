#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int ival=2024, &refval=ival;
    cout<<"ival="<<ival<<endl;
    cout<<"refval="<<refval<<endl;
    refval=2000;
    cout<<"New ival="<<ival<<endl<<"New refval="<<refval<<endl;

    int i=1024, i2=2048;
    
    return 0;
}