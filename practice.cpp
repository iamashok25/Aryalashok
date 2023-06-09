#include<iostream>
using namespace std;
class student
{
    char Faculty[50],name[50];
    char address[60],addressone[60];
    char Email[50];
    int roll;
    long long phone;
    public:
    void getdata();
    void showdata();

};

void student :: getdata()
{
    cout<<"Enter the name of the student:";
    cin.getline(name,50);
    cout<<"Faculty:";
    cin.getline(Faculty,50);
    cout<<"Roll no:";
    cin>>roll;
    cout<<"Permanent Address:";
     cin.ignore();
    cin.getline(address,60);
    cout<<"Temporary Address:";
    cin.ignore();
    cin.getline(addressone,60);
    cout<<"Phone Number:";
    cin>>phone;
    cout<<"Email:";
     cin.ignore();
    cin.getline(Email,50);

    

}
void student :: showdata()
{
cout<<"**--------------------Information of Student-----------------------**"<<endl;

cout<<"Student name="<<name<<endl;
cout<<"Faculty="<<Faculty<<endl;
cout<<"Roll no="<<roll<<endl;
cout<<"Permanent Address="<<address<<endl;
cout<<"Temporary Address="<<addressone<<endl;
cout<<"Email="<<Email<<endl;

}
int main()
{
 student s;
 s.getdata();
s.showdata();
return 0;
}