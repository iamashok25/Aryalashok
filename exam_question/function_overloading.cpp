#include<iostream>
using namespace std;
class area
{
public:
void area1(int l)
{
     int calcarea;
    calcarea=l*l;
return(calcarea);
}
void area1(int l,int b)
{
    int calcarea;
    calcarea=l*b;
return(calcarea);
}
void area1(int l,int b,int h)
{
     int calcarea;
    calcarea=l*b*h;
return(calcarea);
    
}
};
int main()
{
area a1,a2,a3;
cout<<"Area of squre="<<a1.area1(5)<<endl;
cout<<"Area of rectangle"<<a2.area1(5,7)<<endl;
cout<<"volume of rectangle"<<a3.area1(5,7,8)<<endl;

return 0;
}