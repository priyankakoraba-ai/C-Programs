#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
    class currency
    {
        private:
            int rupee, paise, total;
        
        public:
            void setcurrency(int x, int y)
            {
                rupee=x;
                paise=y;
            }

            void getvalue(currency c1, currency c2)
            {
                rupee=c1.rupee+c2.rupee;
                paise=c1.paise+c2.paise;
                total=rupee*100+paise;
            }
            void display(void);
    };
    
    void currency::display(void)
    {
        cout<<"\t"<<rupee<<" Rupee"<<"\t"<<paise<<" Paise"<<endl;
        cout<<"Total Paise="<<total<<endl;
    }
int main(){
    currency c1, c2, c3;
    c1.setcurrency(5, 25);
    c2.setcurrency(4, 75);
    c3.getvalue(c1, c2);
    c3.display();
    return 0;
}