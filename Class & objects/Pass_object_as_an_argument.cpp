#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
using namespace std;
    class rup
    {
        private:
            int n1,n2;
        
        public:
            void get()
            {
                cout<<"Enter first Number:"<<endl;
                cin>>n1;
                cout<<"Enter Second Number:"<<endl;
                cin>>n2;
            }

            void print()
            {
                cout<<"Product1="<<n1<<endl<<"Product2="<<n2<<endl;
    
            }

            void multi(rup r1, rup r2)
            {
                n1=r1.n1*r1.n2;
                n2=r2.n1*r2.n2;
            }
    };

int main(){
    rup r1, r2, r3;
    r1.get();
    r2.get();
    r3.multi(r1, r2);
    r3.print();
    return 0;
}