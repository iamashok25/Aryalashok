#include<iostream>
using namespace std;
class area
{
int leng;
int bredt;
public:
void getdata()
{
    cout<<"Enter length:";
    cin>>leng;
    cout<<"Enter bredth:";
    cin>>bredt;
}
friend float showdata(area a);
};
float showdata(area a)
{
int s;
s = a.leng * a.bredt;
return s;
}
int main()
{
int m;
area p;
p.getdata();
m = showdata(p);
cout<<"Area is "<<m;
return 0;
}