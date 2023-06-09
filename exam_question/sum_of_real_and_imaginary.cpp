#include<iostream>
using namespace std;
class complex
{
    float realp;
    float imagp;
    public:
 void getdata()
 {
    cout<<"Enter real part:";
    cin>>realp;
    cout<<"Enter imaginary part:";
    cin>>imagp;
 }
 void showdata()
 {
    cout<<"The complex number is:"<<realp<<" + "<<imagp<<"i"<<endl;

 }
 void sum(complex c1, complex c2 )
 {
    realp = c1.realp+ c2.realp;
    imagp = c1.imagp + c2.imagp;
 }
};
int main()
 {
complex c1,c2,c3;
cout<<"Enter first complex number"<<endl;
c1.getdata();
cout<<"Enter second complex number:"<<endl;
c2.getdata();
c3.sum(c1,c2);
cout<<"First number is:"<<endl;
c1.showdata();
cout<<"Second number is:"<<endl;
c2.showdata();
cout<<"The sum of this two complex number is:"<<endl;
c3.showdata();
return 0;
 
}