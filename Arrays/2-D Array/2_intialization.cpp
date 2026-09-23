#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a[2][3]={{0.0},{1.0,2.0,3.0}};
    int i,j;
    cout<<"The initializing elements are:"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<setw(2)<<a[i][j];
        }
        cout<<endl;
    }
    cout<<sizeof(char)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    return 0;
}