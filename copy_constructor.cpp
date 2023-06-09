#include<iostream>
using namespace std;
class number
{
    int a;
    public:
    number(){}
    number(int num)
    {
        a=num;
    }
    number(number & obj)
    {
        a=obj.a;
    }
    void showdata()
    {
        cout<<"The input value is "<<a<<endl;
    }
};
int main()
{
    number x(23),y(52);
    x.showdata();
    y.showdata();
    number s(x);
    number z(y);
    s.showdata();
    z.showdata();
    
    return 0;
}