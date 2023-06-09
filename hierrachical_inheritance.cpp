#include<iostream>
using namespace std;
class B
{
   protected:
    int x,y;
    public:
    void assign()
    {
        x=15;
        y=35;
    }
};
class D1 : public B
{
    int s;
    public:
    void sum()
    {
        s=x+y;
        cout<<"sum="<<s<<endl;
    }
};
class D2 : public B
{
    int t;
    public:
    void sub()
    {
        t=x-y;
        cout<<"sub="<<t<<endl;
    }
};
class D3 : public B
{
    int m;
    public:
    void mul()
    {
        m=x*y;
        cout<<"mul="<<m<<endl;
    }
};
int main()
{
D1 obj1;
D2 obj2;
D3 obj3;
obj1.assign();
obj1.sum();
obj2.assign();
obj2.sub();
obj3.assign();
obj3.mul();
return 0;
}