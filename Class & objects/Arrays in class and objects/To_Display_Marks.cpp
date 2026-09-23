#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
    class marks
    {
        private:
            int m[6];
            int i;

        public:
            void set_val(void);
            void display(void);
    };
    void marks::set_val()
    {
        cout<<"Enter the Marks:"<<endl;
        for(i=0;i<6;i++)
        {
            cin>>m[i];
        }
    }

    void marks::display()
    {
        cout<<"The Marks are:"<<endl;
        for(i=0;i<6;i++)
        {
            cout<<setw(4)<<m[i];
        }
    }
int main(){
    system("cls");
    marks s1;
    s1.set_val();
    s1.display();    
    return 0;
}