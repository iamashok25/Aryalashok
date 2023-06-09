#include<iostream>
using namespace std;
class mean
{
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter the value of a=";
        cin>>a;
        cout<<"Enter the value of b=";
        cin>>b;
    }
    friend float showmean(mean s);
};
float showmean(mean s)
{
    float temp;
    temp = (s.a+s.b)/2.0;
    return temp;
}
int main()
{
mean m;
float r;
m.getdata();
r=showmean(m);
cout<<"Mean="<<r;
    return 0;
}