#include<iostream>
using namespace std;
class area
{
float length,bredth,rarea;
public:
area(float x, float y)

{
length = x;
bredth = y;
}
area(area& a1)
{
    length = a1.length;
    bredth = a1.bredth;
}
void calcarea()
{
    rarea =length * bredth;
    cout<<"Area="<<rarea<<endl;
}
};
int main()
{
area a(5.0,7.0);
a.calcarea();
area b(a);
b.calcarea();
area c=a;
c.calcarea();



return 0;
}