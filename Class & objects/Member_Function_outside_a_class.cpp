#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
    class operation
    {
        private:
            int a, b;
        public:
            void get_num()
            {
                cout<<"Enter two numbers:"<<endl;
                cin>>a>>b;
            }
            int sum();
            int Product();
            void Show_data();
    };
    int operation ::sum()
    {
        return (a+b);
    }

    int operation :: Product()
    {
        return (a*b);
    }

    void operation :: Show_data()
    {
        cout<<a<<"+"<<b<<"="<<sum()<<endl;
        cout<<a<<"*"<<b<<"="<<Product()<<endl;
    }
int main(){
    system("cls");
    operation obj1;
    obj1.get_num();
    obj1.Show_data();
    
    return 0;
}