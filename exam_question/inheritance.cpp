#include<iostream>
using namespace std;
class alpha
{
    int a;
    public:
    alpha(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
    }
};
class beta 
{
    int b,c;
    public:
    beta(int y, int z)
    {
        b=y;
        c=z;
    }
    void displaybeta()
    {
        cout<<"b="<<b<<endl;
        cout<<"c="<<c<<endl;
    }
};

class gamma : public alpha, public beta
{
    int d,e;
public:
gamma(int x,int y,int z,int m,int n): alpha(x), beta(y,z)
{
    d=m;
    e=n;
}
void show()
{
    cout<<"d="<<d<<endl;
    cout<<"e="<<e<<endl;
}


};
int main()
{
    gamma g(5,6,7,8,9);
    
    g.show();
    g.display();
    g.displaybeta();


return 0;
}