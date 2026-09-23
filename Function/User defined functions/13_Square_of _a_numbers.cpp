#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    int square(int);
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"The square of "<<n<<" is= "<<square(n)<<endl;
    return 0;
}
int square(int x)
{
    return x*x;
}