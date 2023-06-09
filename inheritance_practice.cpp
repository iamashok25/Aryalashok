//c++ program to demonstrate inheritance

#include<iostream>
using namespace std;

//base class
class C
{
private:
int a;
protected:
int b;
public:
int c;
void getdata()
{
    cout<<"Enter the value of A=";
    cin>>a;
    cout<<"Enter the value of B=";
    cin>>b;
    cout<<"Enter the value of C=";
    cin>>c;
}

void showdata()
{
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;
    cout<<"C="<<c<<endl;
}
};

//derived class
class P :public C
{
    public:
    int k;
    void getk()
    {
        cout<<"Enter the value of K=";
        cin>>k;
    }

    void showk()
    {
        cout<<"K="<<k<<endl;
        int sum;
        sum=b+c+k;
       cout<<"The sum of B,C & K = "<<sum;
    }
};

    int main()
{
    //create object of the P class
    P p1;

    //calling member of the base class
    p1.getdata();
    p1.showdata();

    //calling member of the derived class
    p1.getk();
    p1.showk();

    return 0;
}
