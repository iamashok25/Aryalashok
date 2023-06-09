//Protected Inheritance
//If the derivation type is protected then the inheritance is known as protected inheritance.

#include<iostream>
using namespace std;
class B
{
    private:
    int x;
    protected:
    int y;
    public:
    void getdata();
    void showdata();
};
class D : protected B
{
    private:
    int z;
    public:
    void getd();
    void showd();
};
void B :: getdata()
{
    cout<<"Enter the value of x=";
    cin>>x;
    cout<<"Enter the value y=";
    cin>>y;
}
void B :: showdata ()
{
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
}
void D :: getd()
{
    getdata();
    cout<<"Enter value of z=";
    cin>>z;
    cout<<"Enter value of Y=";
    cin>>y;
}
void D :: showd()
{
    showdata();
    cout<<"Z="<<z<<endl;
}
int main()
{
    D d1;
    d1.getd();
    d1.showd();
    return 0;

}
