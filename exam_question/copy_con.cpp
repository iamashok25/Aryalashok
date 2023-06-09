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
complex (complex& c1)
{
    realp = c1.realp;
    imagp = c1.imagp;
}
void display()
{
    cout<<realp<<" + "<<imagp<<"i"<<endl;
}
};
int main()
{
complex c(2,5);
complex a(c);
complex b=c;
complex d(c);
complex e=c;
cout<<"First complex number is:"<<endl;
c.display();
cout<<"Second complex number is:"<<endl;
a.display();
cout<<"Third complex number is:"<<endl;
b.display();
cout<<"fourth complex number is:"<<endl;
d.display();
cout<<"fifth complex number is:"<<endl;
e.display();



return 0;
}