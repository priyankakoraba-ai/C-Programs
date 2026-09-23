#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    int i, j, k, n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        for (k = i; k <= n; k++)
        {
            cout << " ";
        }

        if (i == 1 || i == n)
        {
            for (j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }

        else
        {
            cout << "*";
            for (j = 1; j <= 2 * i - 3; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}