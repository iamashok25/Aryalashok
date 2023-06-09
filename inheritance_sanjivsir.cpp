#include<iostream>
using namespace std;
class student
{
    public:
    char name[50];
    char address[50];
    int roll;

void getdata()
    {
        cout<<"Enter the name of student";
        cin.ignore();
        cin.getline(name,50);
        cout<<"Enter the the address of student"<<endl;
        
        cin.getline(address,50);
        cout<<"Enter the Roll no. of student"<<endl;
        cin>>roll;
    }
    
};
class result : public student
{
    public:
void showdata()
{
    cout<<"Name"<<name<<endl;
    cout<<"Address"<<address<<endl;
    cout<<"Roll NO."<<roll<<endl;
}
};
int main()
    {
       result s[100];
        int i,n;
        cout<<"Enter Total no of student:";
        cin>>n;
        {
        for(i=0;i<n;i++)
        {
            s[i].getdata();

        }
        cout<<"***-------------------Biodata of student---------------------***"<<endl;
    }
        for(i=0;i<n;i++)
        {
            s[i].showdata();
        }
        return 0;
    }

