#include<iostream>
#include<conio.h>
int LargeNum(int, int, int);
using namespace std;
int main()
    {
        int a, b, c, Big;
        cout<<"Enter the three Numbers:"<<endl;
        cin>>a>>b>>c;
        Big=LargeNum(a, b, c);
        cout<<"The Largest of three Numbers is : "<<Big<<endl;
        return 0;
    }

   int LargeNum(int x, int y, int z)
    {
        int Large;
        /*if(x>y)
        {
            if(y>z)
            {
                Large=x;
            }
            else
            {
                if(z>x)
                {
                    Large=z;
                }
                else{
                    Large=x;
                }
            }
        }
        else
        {
            if(y>z)
            {
                Large=y;
            }
            else
            {
                Large=z;
            }
        }*/

        Large=x>y?(x>z?x:z):(y>z?y:z);

        return Large;
    }