#include<iostream>
using namespace std;
class area 
{
int l,b;
public:
void getdata()
{
    cout<<"Enter l";
    cin>>l;
     cout<<"Enter b";
    cin>>b;
}

void showdata()
{
    cout<<l<<b;
}
friend int calcarea( area s);
};
int calcarea( area s)
{
    int a;
    a=s.l*s.b;
    return a;
}
int main()
{
area a;
int m;
a.getdata();
a.showdata();
m=calcarea(a);
cout<<"Area"<<m;


return 0;
}