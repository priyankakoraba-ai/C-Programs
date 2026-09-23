#include<iostream>
using namespace std;

int main(){
    int ival=30;
    int *ptr=&ival;
    cout<<"ival= "<<ival<<endl;
    cout<<"ptr = "<<ptr<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    *ptr=51;
    cout<<"\nNew ival= "<<ival<<endl;
    cout<<"New ptr = "<<ptr<<endl;
    cout<<"New *ptr = "<<*ptr<<endl;
    ival=52;
    cout<<"\nNew ival= "<<ival<<endl;
    cout<<"New ptr = "<<ptr<<endl;
    cout<<"New *ptr = "<<*ptr<<endl;


    return 0;
}