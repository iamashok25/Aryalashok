#include<iostream>
using namespace std;

class student 
{
char name[50];
char address[50];
int roll;
long long phone;

public:
void getdata();
void showdata();

};
    void student :: getdata()
    {
cout<<"Enter the name of student:";
    cin.ignore();
cin.getline(name,50);
cout<<"Enter student's address:";
cin.getline(address,50);
cout<<"Enter Roll no:";
cin>>roll;
cout<<"Enter Phone number:";
cin>>phone;
    }
    void student :: showdata()
    {
        cout<<"Student Name:"<<name<<endl;
        cout<<"Address:"<<address<<endl;
        cout<<"Roll No:"<<roll<<endl;
        cout<<"Phone Number:"<<phone<<endl<<endl;
    }
    int main()
    {
        student s[100];
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

