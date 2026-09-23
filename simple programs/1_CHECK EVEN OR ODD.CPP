/*To find whether a given number is even or odd;*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n%2==0)
    {
        cout<<"It is an even number:"<<endl;
    }
    else{
        cout<<"Its is an odd number:"<<endl;
    }
    return 0;
}
