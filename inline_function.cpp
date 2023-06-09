#include<iostream>
using namespace std;
class student
{
    char name[50];
    int roll;
    public:
    void getdata();
    void showdata();

};
inline void student :: getdata()
{
    cout<<"Eneter the name of student";
    cin.getline(name,50);
        cout<<"Enter Roll no:";
        cin>>roll;
}
inline void student ::  showdata()
{
    cout<<"Student name:"<<name<<endl;
    cout<<"Roll no:"<<roll;
}

int main()
{
    student d1;
    d1.getdata();
    d1.showdata();
    return 0;
}
