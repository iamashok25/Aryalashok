#include<iostream>
using namespace std;
class area
{
    int length;
    int bredth;
    int rectArea;
    public:
    void getdata()
    {
        //length = 50;
        //bredth = 20;
        cout<<"Enter length=";
        cin>>length;
        cout<<"Enter Bredth=";
        cin>>bredth;
    }
    friend void showarea(area s);  //declare friend function
};
void showarea(area s) 
{
    s.rectArea= s.length * s.bredth;
    cout<<"Area of rectangle is="<<s.rectArea;

}
int main()
{
    area a;
    a.getdata();
    showarea(a);
    return 0;
}