#include<iostream>
using namespace std;
class b
{

public:
void virtual show()
{
    cout<<"This is base"<<endl;
}
};
class d1:public b
{
    public:
    void show()
    {
        cout<<"This is derived class:"<<endl;
    
    }
};
class d2:public b
{
     public:
     void show()
     {
        cout<<"this is second derive class";
     }
};
int main()
{
b *p;
b obj;
d1 obj1;
d2 obj2;
p=&obj;
p->show();
p=&obj1;
p->show();
p=&obj2;
p->show();
return 0;
}