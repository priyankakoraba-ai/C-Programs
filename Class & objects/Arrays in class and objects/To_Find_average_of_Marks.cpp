#include<iostream>
#include<iomanip>

using namespace std;
    class data
    {
        private:
            int rollno, Science, Maths;
        
        public:
        int avg();
        void get_data();
        void put_data();
    };
    void data::get_data()
    {
        cout<<"Enter Roll Number: ";
        cin>>rollno;
        cout<<"Enter Science Marks: ";
        cin>>Science;
        cout<<"Enter Maths Marks: ";
        cin>>Maths;
        put_data();
    }

    int data::avg()
    {
        int a;
        a=(Science+Maths)/2;
        return a;
    }

    void data::put_data()
    {
        cout<<"Average= "<<avg()<<endl;
    }

int main(){
    system("cls");
    data std[3];
    for(int i=0;i<3;i++)
    {
        std[i].get_data();
    }
    return 0;
}