//Multiple Inheritance.

#include<iostream>
using namespace std;
class sample1 
{
    protected:
    int m;
    public:
    void get_m(int);
};
class sample2
{
    protected:
    int n;
    public:
    void get_n(int);
};
class sample3 : public sample1,public sample2
{
    public:
    void display();
};
void sample1::get_m(int x)
{
    m=x;
}
void sample2 :: get_n(int y)
{
    n=y;
}
void sample3 :: display()
{
    cout<<"value of m="<<m<<endl;
    cout<<"value of n="<<n<<endl;
    cout<<"value of m+n="<<m+n<<endl;
}
int main()
{
    sample3 p;
    p.get_m(5);
    p.get_n(10);
    p.display();
    return 0;
}
