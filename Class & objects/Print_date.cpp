#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
    class data
    {
        private:
            int day;
            int month;
            int year;

        public:
            void date(int dd, int mm, int yy)
            {
                day=dd;
                month=mm;
                year=yy;
                cout<<"\t"<<day<<"-"<<month<<"-"<<year<<endl;
            }
    };
int main(){
    int d, m, y;
    data date1, date2;
    system("cls");
    cout<<"Enter date:"<<endl;
    cin>>d>>m>>y;
    date1.date(d, m, y);
    date2.date(20, 05, 2006);
    date1.date(26, 07, 2022);

    return 0;
}