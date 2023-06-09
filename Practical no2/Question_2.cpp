//Question.2: WAP using copy constructor to copy data of an object to another object
#include<iostream>
using namespace std;
class sample
{
    int a,b;
    public:
   sample(int x, int y)
    {
a=x;
b=y;

    }
    sample(const sample & d) {
      // Assign Values In Constructor
      a = d.a;
      b = d.b;
    }
    void display()
    {
        cout<<"\t"<<a<<"\t"<<b<<endl;
    }
};
int main()
{
sample a(2,3);
sample b=a;
sample c=a;
sample f=a;
sample e(a);
cout<<"Values=";
b.display();
cout<<"Values=";
c.display();
cout<<"Values=";
f.display();
cout<<"Values=";
e.display();
return 0;
}