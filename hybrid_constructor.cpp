#include<iostream>
using namespace std;
class complex
{
    float realp,imagp;
    public:
    complex(float a, float b)
    {
        realp=a;
        imagp=b;
    }
    complex(complex &c1, float k)
    {
        realp= c1.realp;
        imagp=k;

    }
    void display()
    {
        cout<<realp<<"+i"<<imagp;

    }
};
int main()
{
    int x,y,k;
    cout<<"Enter real part:"<<endl;
    cin>>x;
    cout<<"Enter imaginary part:"<<endl;
    cin>>y;
    complex c1(x,y);
    cout<<"Enter vlaue of k:"<<endl;
    cin>>k;
    complex c2(c1,k);
   cout<<"first number is:";
   c1.display();
   cout<<endl<<"second number is:";
    c2.display();
    return 0;
}