#include<iostream>
using namespace std;
struct student
{

char name [50];
int roll;
char address;
void getdata();
void showdata();
};

void student :: getdata()
{
cout<<"Name:";
cin.get(name, 50);
cout<<"Roll No:";
cin>>roll;
cout<<"address:";
cin>>address; 
}
void student ::  showdata()
{
 cout<<"/n Information of student" <<endl;
cout<<"Name:"<<name << endl;
cout<<"Roll No"<<roll << endl;
cout<<"Address"<<address;   
}
int main()
{
    student std;

std.getdata();
std.showdata();
return 0;
}