#include<iostream>
int SimpleInterest(int, int, float);
using namespace std;

int main(){
    int p, t;
    float r, Si;
    cout<<"Enter the Principle amount: ";
    cin>>p;
    cout<<"Enter the time:";
    cin>>t;
    cout<<"Enter the rate of interest: ";
    cin>>r;
    Si=SimpleInterest(p, t, r);
    
    cout<<"The Simple Interest = "<<Si<<endl;
    return 0;
}
 
int SimpleInterest(int x, int y, float z)
{
    float si;
    si=(float)(x*y*z)/100;
    return si;
}