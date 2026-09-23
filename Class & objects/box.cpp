#include <iostream>
#include <conio.h>
using namespace std;
class box
{
private:
    int height;

public:
    int width;
    int length;
    void set_height(int i)
    {
        height = i;
    }
    int get_height()
    {
        return height;
    }
};
 int main()
{
    box obj1;
    system("cls");
    obj1.length=10;
    obj1.width=20;
    obj1.set_height(30);        // Private variable can be accessed only through its public method
    cout<<obj1.get_height();
    return 0;
}