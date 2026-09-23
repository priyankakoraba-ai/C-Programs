#include <iostream>
#include <conio.h>
using namespace std;
class sample
{
private:
    int num;

public:
    void set(int x);
    void pass(sample &s1, sample &s2);
    void print();
};

void sample::set(int x)
{
    num = x;
}

void sample::pass(sample &s1, sample &s2)
{
    s1.num = 50;
    s2.num = 100;
    cout << "\nchanged value of s1= " << s1.num << endl;
    cout << "changed value of s2= " << s2.num << endl;
}
void sample::print()
{
    cout <<num<< endl;
}

int main()
{
    sample s1, s2, s3;
    s1.set(20);
    s2.set(30);
    cout << "The values of s1 before Passing:" << endl;
    s1.print();
    cout << "The values of s2 before Passing:" << endl;
    s2.print();

    s3.pass(s1, s2);

    cout << "\nThe values of s1 After Passing:" << endl;
    s1.print();
    cout << "The values of s2 After Passing:" << endl;
    s2.print();

    return 0;
}