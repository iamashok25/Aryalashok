/* Quetsion: The following figure shows minimum information about required for each class. 
Write a program with member functions to read and display information of individual object . 
Every class should contain atleast one constructor and should be inherited to other class as well. */

#include <iostream>
using namespace std;
class staff
{
    protected:
   char name[50];
   char address[50];
   char post[50];
   public:
   staff()
   {
       cout<<"************ENTER STAFF DETAILS********************"<<endl;
       cout<<"Enter the name of Staff:";
       cin.getline(name,50);
       cout<<"Address:";
       cin.getline(address,50);
       cout<<"Post:";
       cin.getline(post,50);
   }
  void showstaff()
{
       cout<<"************STAFF DETAILS********************"<<endl;
       cout<<"Name="<<name<<endl;
       cout<<"Address="<<address<<endl;
       cout<<"Post="<<post<<endl;
   }
    
} ;


class Teaching : virtual public staff
{
   
     char name[50];
   char address[50];
   char post[50];
    public:
    Teaching()
    {
        cout<<"************ENTER TEACHING STAFF DETAILS********************"<<endl;
        cout<<"Enter the name of Teacher:";
        cin.getline(name,50);
        cout<<"Address:";
        cin.getline(address,50);
        cout<<"Post:";
        cin.getline(post,50);
        
    }
    void showtech()
    {
        cout<<"************TEACHING STAFF DETAILS********************"<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Address="<<address<<endl;
        cout<<"Post="<<post<<endl;
  
    }
};
class Non_Teaching : virtual public staff
{
   
     char name[50];
   char address[50];
   char post[50];
    public:
Non_Teaching()
    {
        cout<<"************ENTER NON-TEACHING STAFF DETAILS********************"<<endl;
        cout<<"Enter the name of Staff:";
        cin.getline(name,50);
        cout<<"Address:";
        cin.getline(address,50);
        cout<<"Post:";
        cin.getline(post,50);
    }
    void shownontech()
    {
        cout<<"************NON-TEACHING STAFF DETAILS********************"<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Address="<<address<<endl;
        cout<<"Post="<<post<<endl;
      
    }
};
class admin : public Teaching, public Non_Teaching
{
    char name[50];
   char address[50];
   char post[50];
    int w;
     public:
admin()
    {
        cout<<"************ENTER ADMIN DETAILS********************"<<endl;
        cout<<"Enter the name of Teacher:";
        cin.getline(name,50);
        cout<<"Address:";
        cin.getline(address,50);
        cout<<"Post:";
        cin.getline(post,50);
        cout<<"Working Hours:";
        cin>>w;
    }
    void showadmin()
    {
cout<<"************ADMIN DETAILS********************"<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Address="<<address<<endl;
        cout<<"Post="<<post<<endl;
        cout<<"Working Hours="<<w<<endl;
    }
};
int main()
{
    admin a;
   a.showstaff();
   a.showtech();
   a.shownontech();
   a.showadmin();
    return 0;
}





