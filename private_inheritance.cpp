//Private Inheritance
//If the derivation type is private then inheritance is known as private function.

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
class D: private B
{
    private:
    int z;
    public:
    void input();
    void output();
};
void B::getdata()
{
    cout<<"Enter the value of x=";
    cin>>x;
    cout<<"Enter the value of y=";
    cin>>y;
}
void B :: showdata()
{
    cout<<"x="<<x;
    cout<<"y="<<y;

}
void D :: input()
{
    getdata();
    cout<<"Enter the value of z=";
    cin>>z;
}
void D :: output()
{
    int f;
    f=y+z;
    cout<<"y+z="<<f;
}
int main()
{
    D d1;
    d1.input();
    d1.output();
    return 0;
}
