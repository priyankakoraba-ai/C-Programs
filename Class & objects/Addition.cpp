#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class Addition
{
private:
    int a, b;

public:
    void get_Num()
    {
        cout << "Enter the two Numbers:" << endl;
        cin >> a >> b;
    }
    void Show_sum()
    {
        cout << "The Sum of " << a << " and " << b << " is= " << a + b;
    }
};
int main()
{

    system("cls");
    Addition s1;
    s1.get_Num();
    s1.Show_sum();
    return 0;
}