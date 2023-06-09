#include<iostream>
using namespace std;
class complex
{
    int imagp,realp;
    public: 
    complex(int x, int y)
    {
        realp = x;
        imagp = y;

    }
    complex(complex& c1)
    {
        realp = c1.realp;
        imagp = c1.imagp;
    }
    void displaycomplex()
{
    cout<<realp<<" + "<<imagp<<"i"<<endl;
}
};
int main()
{
    complex c(5,7);
    complex b(c);
    complex a=c;
    cout<<"First complex number is=";
    c.displaycomplex();
    cout<<"Second complex number is=";
    b.displaycomplex();
    cout<<"Third complex number is=";
    a.displaycomplex();
    return 0;
}