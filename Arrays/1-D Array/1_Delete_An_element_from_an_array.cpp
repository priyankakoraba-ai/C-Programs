#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int elem, arr[100], tot, i, j, found = 0;
    system("cls");
    cout << "How Many elements? " << endl;
    cin >> tot;
    cout << "Enter the " << tot << " array elements: " << endl;
    for (i = 0; i < tot; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to delete: " << endl;
    cin >> elem;
    for (i = 0; i < tot; i++)
    {
        if (arr[i] == elem)
        {
            for (j = i; j < tot - 1;j++)
            {
                arr[j] = arr[j + 1];
            }
            found = 1;
            i--;
            tot--;
        }
    }

    if (found == 0)
    {
        cout << "The Element is not found in the array." << endl;
    }

    else
    {
        cout << "The element is deleted successefuly." << endl;
        cout << "And the New array is: " << endl;
        for (i = 0; i < tot; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}