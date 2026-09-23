#include<iostream>
#include<iostream>
#include<stdlib.h>
using namespace std;

    class Algebra
    {
        private:
            int a, b;
        public:
            void get_num()
            {
                cout<<"Enter two numbers:"<<endl;
                cin>>a>>b;
            }
            int sum()
            {
                return (a+b);
            }
            int diffe()
            {
                return (a-b);
            }
            int multi()
            {
                return (a*b);
            }
           /*float division(float, float)
            {
                return (float(a/b));
            }*/
            void show_data();
    };

    void Algebra::show_data()
    {
        cout<<a<<"+"<<b<<"="<<sum()<<endl;
        cout<<a<<"-"<<b<<"="<<diffe()<<endl;
        cout<<a<<"*"<<b<<"="<<multi()<<endl;
        //cout<<a<<"/"<<b<<"="<<division(a, b)<<endl;

    }
int main(){
    Algebra obj1;
    system("cls");
    obj1.get_num();
    obj1.show_data();
    return 0;
}