#include<iostream>
#include<string.h>
using namespace std;
class person
{
char name[50];
int age;
public:
person(char a[],int b)
{
    strcpy(name,a);
    age = b;
}
void show1()
{
    cout<<"Name="<<name<<endl;
    cout<<"age="<<age<<endl;
    }
};
class account : virtual public person
{
    int salary;
    public:
    account(char a[],int b,int c):person(a,b)
    {
        salary = c;
    }
    void show2()
    {
        cout<<"Salary= "<<salary<<endl;
    }
};
class info:virtual public person
{
int weight;
    public:
    info(char a[],int b,int d):person(a,b)
    {
        weight = d;
    }
    void show3()
    {
        cout<<"weight= "<<weight<<endl;
    }
};
class code : public account, public info
{
  int yourcode;
  public:
 code(char a[],int b,int c,int d, int e):account(a,b,c), info(a,b,d),person(a,b)
 {
    yourcode = d;
 }  
 void show4()
 {
    cout<<"Your code is = "<<yourcode<<endl;
 }
};
int main()
{
    char name[50];
    int age,salary,weight,yourcode;
    cout<<"Enter name:";
    cin.getline(name,50);
    cout<<"Enter age=";
    cin>>age;
    cout<<"enter salary=";
    cin>>salary;
    cout<<"enter weight=";
    cin>>weight;
    cout<<"enter your code="<<endl;
    cin>>yourcode;
    cout<<"\n"<<"Showing Your detalis......."<<endl;
code c1(name,age,salary,weight,yourcode);
c1.show1();
c1.show2();
c1.show3();
c1.show4();


return 0;
}