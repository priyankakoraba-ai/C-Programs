#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
struct destance
{
    int feet;
    float inches;
};

struct room
{
    destance length;
    destance width;
}dining;

int main(){
    
    cout<<"Enter the length of the dining room in feet and inches: "<<endl;
    cin>>dining.length.feet>>dining.length.inches;
    cout<<"Enter the width of the dining room in feet and inches: "<<endl;
    cin>>dining.width.feet>>dining.width.inches;

    // convert length and width into feet;
    float L=dining.length.feet+dining.length.inches/12;
    float w=dining.width.feet+dining.width.inches/12;

    cout<<"The converted Length and width to feet are:"<<endl;
    cout<<"Length = "<<L<<endl<<"Width = "<<w<<endl;

    //To find the area of the Dining Room:
    cout<<"\nArea of the Dining Room : "<<L*w<<" square root."<<endl;
    return 0;
}