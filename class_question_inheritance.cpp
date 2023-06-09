#include<iostream>
using namespace std;
class stdinfo
{
    protected:
    int roll;
    char name[50];
    char address[50];
    public:
    void getdata()
    {
        cout<<"Enter the name of student=";
         cin.ignore();
        cin.getline(name,50);
       
        cout<<"Enter the address of student=";
        cin.getline(address,50);
      
        cout<<"Enter the roll no=";
        cin>>roll;
        
    }
};
class result : public stdinfo
{
    public:
    void getresult()
    {
        cout<<"name="<<name<<endl;
        cout<<"address="<<address<<endl;
        cout<<"roll no="<<roll<<endl;
    }
};
int main()
{
    result r[100];
    int i,n;
        cout<<"Enter Total no of student:";
        cin>>n;
        {
        for(i=0;i<n;i++)
        {
            r[i].getdata();

        }
        cout<<"***-------------------Biodata of student---------------------***"<<endl;
    }
        for(i=0;i<n;i++)
        {
            r[i].getresult();
        }
        return 0;
}