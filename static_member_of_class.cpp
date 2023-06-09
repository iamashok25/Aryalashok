#include<iostream>
using namespace std;
class item 
{
    static int count;
    int n;
    public:
    void getdata(int a)
    {
        n=a;
        count++;
    }
    void showcount()
    {
        cout<<"Count="<<count<<endl;
    }
};
int item :: count;
int main()
{
    item x,y,z;
    x.showcount();
    y.showcount();
    z.showcount();
    x.getdata(5);
    y.getdata(6);
    z.getdata(7);

    cout<<"After reading data";

    x.showcount();
    y.showcount();
    z.showcount();
    return 0;
    
    
    
}