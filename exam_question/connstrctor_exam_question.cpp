#include<iostream>
#include <string.h>
using namespace std;
class name
{
    char fname[50];
    char lname[50];
    public:
    name() {
        cout<<"Enter details...."<<endl;
    } // default constructor
    name(char a[], char b[])
    {
        strcpy(fname,a);
        strcpy(lname,b);
   
    }
    
        void display()
    {
        cout<<"Your name is:"<<fname<<" "<<lname<<endl;
       
    }
};

int main()
{
char fname[50];
char lname[50];
cout<<"Enter first name:";
cin.getline(fname,50);
cout<<"Enter last name:";
cin.getline(lname,50);
name n1(fname,lname);
n1.display();

return 0;
}