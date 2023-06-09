#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void getdata(int n1, int n2){
a=n1;
b=n2;

    }
    friend complex comsum(complex o1, complex o2);
    void showdata()
    {
        cout<<"Your Number is"<<a<<" + "<<b<<"i"<<endl;
    }
};
complex comsum(complex o1, complex o2){
    complex o3;
    o3.getdata((o1.a + o2.a), (o1.b+o2.b));
    return o3;
}
int main()
{
    complex c1,c2,sum;
    c1.getdata(1,5);
    c1.showdata();
    c2.getdata(4,7);
    c2.showdata();
    sum = comsum(c1,c2);
    sum.showdata();
    return 0;
}
