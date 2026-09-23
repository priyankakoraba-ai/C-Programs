#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class rectangle
{
private:
    int l;
    int b;

public:
    void get_data()
    {
        cout<<"Enter length and breadth:"<<endl;
        cin>>l>>b;
    }
    int compute_area()
    {
        return (l*b);
    }
    void Show_data()
    {
        cout<<"The Area of the rectangle is: "<<compute_area()<<" centi meter cube"<<endl;
    }
};
int main()
{
    rectangle r1;
    system("cls");
    r1.get_data();
    r1.Show_data();
    return 0;
}