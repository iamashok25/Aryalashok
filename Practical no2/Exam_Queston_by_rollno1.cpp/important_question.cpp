#include <iostream>
using namespace std;
class University
{
    protected:
   char name[50];
   char location[50];
   public:
   University()
   {
       cout<<"**********ENTER UNIVERSITY DETAILS******************"<<endl<<endl;
       cout<<"Enter the name of the univevrsity:";
       cin.getline(name,50);
       cout<<"Enter Location:";
       cin.getline(location,50);
      
   }
  void showuni()
{
       cout<<"**********UNIVERSITY DETAILS******************"<<endl<<endl;
       cout<<"Name="<<name<<endl;
       cout<<"Location="<<location<<endl;
     
   }
    
} ;


class const_college : virtual public University
{
    public:
   char name[50];
   char dean[50];
   char program[50];
    const_college()
    {
        cout<<"*********ENTER CONSTITUTENT COLLEGE DETAILS******************"<<endl<<endl;
        cout<<"Enter the name of College:";
        cin.getline(name,50);
        cout<<"Name of Dean:";
        cin.getline(dean,50);
        cout<<"Name of program:";
        cin.getline(program,50);
        
    }
    void showconst_college()
    {
        cout<<"**********CONSTITUTENT COLLEGE DETAILS******************"<<endl<<endl;
        cout<<"College Name="<<name<<endl;
        cout<<"Dean Name="<<dean<<endl;
        cout<<"Program="<<program<<endl;
  
    }
};
class affiliated_college : virtual public University
{
    public:
     char name[50];
   char address[50];
   int program;
affiliated_college()
    {
        cout<<"**********ENTER AFFILIATED COLLEGE'S DETAILS******************"<<endl<<endl;
        cout<<"Enter the name of College:";
        cin.getline(name,50);
        cout<<"Address:";
        cin.getline(address,50);
        cout<<"No of programs:";
        cin>>program;
    }
    void showaff_college()
    {
        cout<<"**********AFFILIATED COLLEGE'S DETAILS******************"<<endl<<endl;
        cout<<"Name of College="<<name<<endl;
        cout<<"Address="<<address<<endl;
        cout<<"No of programs="<<program<<endl;
      
    }
};
class student : public const_college, public affiliated_college
{
    public:
    char name[50];
   char program[50];
   int year;
student()
    {
        cout<<"**********ENTER STUDENT'S DETAILS******************"<<endl<<endl;
        cout<<"Enter the name of student:";
        cin.ignore();
        cin.getline(name,50);
       
        cout<<"Program:";
        cin.getline(program,50);
        cout<<"Enrolled Year:";
        cin>>year;
    }
    void showstudent()
    {
cout<<"**********STUDENT'S DETAILS******************"<<endl<<endl;
        cout<<"Student's Name="<<name<<endl;
        cout<<"Program="<<address<<endl;
        cout<<"Enrolled year="<<year<<endl;
    }
};
int main()
{
    student a;
    a.showuni();
   a.showconst_college();
   a.showaff_college();
   a.showstudent();
    return 0;
}