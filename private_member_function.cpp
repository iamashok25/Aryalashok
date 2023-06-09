#include<iostream>
using namespace std;
class bijan
{
 int m;
 void read()
 {
     cout<<"Value of m="<<m<<endl;
 }
public:

void write()
{
    cout<<"Enter a number";
    cin>>m;
     read();
}
void update()
{
    cout<<"Enter new value of m";
    cin>>m;
    read();
}
};
int main()
{
    bijan p;
    p.write();
    p.update();
    return 0;
}