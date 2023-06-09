#include<iostream>
using namespace std;

class Multiplication
{
int a,b,Product;

 public:
 void getData();
 void AirthemeticProduct();
 };

 inline void Multiplication :: getData(void)
 {
     cout<<"Enter the value of a";
     cin>>a;
     cout<<"Enter the value of b";
     cin>>b;

 }
 inline void Multiplication :: AirthemeticProduct(void)
{
    Product=a*b;
    cout<<"The product of a and b = "<<Product;

}
int main()
{
Multiplication P;
P.getData();
P.AirthemeticProduct();
return 0;
}


 