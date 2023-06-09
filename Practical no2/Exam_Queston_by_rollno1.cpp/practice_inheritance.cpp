//CODE BY ASHOK ARYAL

#include<iostream>
#include<string.h>
using namespace std;
class person
{
char name[50];
int code;
public:
person(char a[],int b)
{
    strcpy(name,a);
    code = b;
}
void personinfo()
{
    cout<<"name:"<<name<<endl;
    cout<<"code"<<code<<endl;
}
};
class account :virtual public person
{
    int salary;
    public:
    account(char a[],int b,int c): person(a,b)
    {
salary= c;
    }
    void accountinfo()
    {
        cout<<"salary:"<<salary<<endl;
    }
};
class admin :virtual public person
{
int year;
public:
admin(char a[],int b,int d): person(a,b)
{
    year = d;
}
void admininfo()
{
    cout<<"Year:"<<year<<endl;
}
};
class record : public account, public admin
{
int recordno;
public:
record(char a[],int b,int c,int d,int e):account(a,b,c),admin(a,b,d),person(a,b)
{
    recordno = e;
}
void recordinfo()
{
cout<<"Record no="<<recordno<<endl;
}
};
int main()
{
char name[50];
int salary,code,year,recordno;
cout<<"Enter person name and code"<<endl;
cin>>name>>code;
cout<<"Enter salary"<<endl;
cin>>salary;
cout<<"Enter number of year of experience"<<endl;
cin>>year;
cout<<"Eneter Record no"<<endl;
cin>>recordno;
record r1(name,code,salary,year,recordno);
/*r1.person::display();
r1.account::display();
r1.admin::display();
r1.display();*/
r1.personinfo();
r1.accountinfo();
r1.admininfo();
r1.recordinfo();
return 0;
}