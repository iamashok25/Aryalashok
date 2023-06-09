#include<iostream>
using namespace std;
class item 
{
    static int count;
    int n;
    public:
    void getdata()
    {
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
    x.getdata();
    y.getdata();
    z.getdata();

    cout<<"After reading data";

    x.showcount();
    y.showcount();
    z.showcount();
    return 0;
    
    
    
}