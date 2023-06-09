#include<iostream>
#include<string.h>
using namespace std;
class name
{
char fname[50],lname[50];
public:
name(char a[], char b[])
{
    strcpy(fname,a);
    strcpy(lname,b);
}
void display()
{
    cout<<"Name= "<<fname<<" "<<lname;
}
};
int main()
{
char fname[50],lname[50];
cout<<"Enter first name";
cin.getline(fname,50);
cout<<"Enter Last name";
cin.getline(lname,50);
name n(fname,lname);
n.display();

return 0;
}