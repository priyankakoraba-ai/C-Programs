#include<iostream>
#include<conio.h>
using namespace std;
class item
{
    private:
        int Number;
        float Cost;

    public:
        void get_data(int a, float b);
        void Show_data()
        {
            cout<<"Number= "<<Number<<endl;
            cout<<"Cost= "<<Cost<<endl;
        }
};

void item :: get_data(int a, float b)
{
    Number=a;
    Cost=b;
}

int main()
{
    item O;
    O.get_data(105, 12.5);
    O.Show_data();
    return 0;
}
