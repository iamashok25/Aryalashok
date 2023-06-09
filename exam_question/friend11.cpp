#include<iostream>
using namespace std;
class mean
{
int a;
int b;
public:
void getdata()
{
    cout<<"Enter a=";
    cin>>a;
    cout<<"Enter b=";
    cin>>b;
}
friend float showdata(mean m);
};
float showdata(mean m)
{
    float temp;
    temp = (m.a+m.b)/2.0;
    return temp; 
}
int main()
{
float r;
mean s;
s.getdata();
r= showdata(s);
cout<<"Mean is="<<r;

return 0;
}