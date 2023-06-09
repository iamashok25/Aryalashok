#include<iostream>
using namespace std;
class student
{
    protected:
    char name[30];
    int roll;
    public:
    void getdata()
    {
        cout<<"Enter name:";
       cin.getline(name,30);
        cout<<"Enter roll no:";
        cin>>roll;

    }
    void showdata()
    {
        cout<<"Student name:"<<name<<endl;
        cout<<"Roll no:"<<roll<<endl;

    }
};
class marks : public student
{
    protected:
    int m1,m2;
    public:
    void getmarks()
    {
        cout<<"Enter Marks1:";
        cin>>m1;
        cout<<"Enter Marks2:";
        cin>>m2;
        
    }
    void showmarks()
    {
        cout<<"Marks1:"<<m1<<endl;
         cout<<"Marks2:"<<m2<<endl;
            }
};
class result : public marks
{
    int total;
    public:
void output()
{
    cout<<"Total="<<total<<endl;
}
};
int main()
{
    result r;
    r.getdata();
    r.getmarks();
    r.showdata();
    r.showmarks();
    r.output();
    return 0;
}