#include<iostream>
using namespace std;
class alpha
{
private:
int a;
public:
alpha(int x)
{
a=x;
}
void showa()
{
cout<<"value of a="<<a<<endl;
}
};
class beta
{
private:
int b,c ;
public:
beta(int y,int z)
{
b=y;
c=z;
}
void showb()
{
cout<<"value of b="<<b<<endl;
cout<<"value of c="<<c<<endl;
}
};
class gamma:public alpha, public beta
{
private:
int d,e;
public:
gamma(int x,int y,int z,int m,int n):alpha(x),beta(y,z)
{
d=m;
e=n ;
}
void showc()
{
cout<<"value of d="<<d<<endl;
cout<<"value of e="<<e<<endl;
}
};
int main()
{
gamma g1(5,6,7,10,20);
g1.showa();
g1.showb();
g1.showc();
return 0;
}