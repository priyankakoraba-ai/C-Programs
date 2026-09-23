#include<iostream>
int greatest();
using namespace std;

int main(){
    int O=greatest();
    cout<<"The Greatest value is: "<<O<<endl;
    return 0;
}

int greatest()
{
    int x, y;
    cout<<"Enter the two numbers to find which one is Greater: "<<endl;
    cin>>x>>y;
    if(x>y)
    {
        return x;
    }
    else{
        return y;
    }
}