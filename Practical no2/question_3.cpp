//Qurstion.3: WAP to design a class representing complex numbers and having the functionality of performing addition of two complex numbers using function overloading.



#include<iostream>
using namespace std;
class complex
{
int realp,iamgp;
public:
complex(){} //default constructor
complex(int x)
{
realp=x;
iamgp=x;
}
complex(int x, int y)
{
    realp=x;
    iamgp=y;

}
void sum(complex c1, complex c2)
{
    realp= c1.realp+c2.realp;
    iamgp= c1.iamgp+c2.iamgp;
    }
    void display()
    {
        cout<<realp<<"+j"<<iamgp<<endl;
    }
};
    int main()
    {
        complex a(10,9);
        complex b(6);
        complex c;
        c.sum(a,b);
        cout<<"First number=";
        a.display();
        cout<<"Second Number=";
        b.display();
        cout<<"Result=";
        c.display();
        return 0;
            }

