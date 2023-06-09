#include <iostream>
using namespace std;
class student
{
    protected:
    char name[50];
    int roll,n;
    public:
    void getdata()
    {
cout<<"*----------Input information of student------*"<<endl<<endl;
        cout<<"Enter the name=";
        cin.getline(name,50);
        cout<<"Enter the roll no=";
        cin>>roll;
    }
    void showdata()
    {
        cout<<"*----------Showing information of student------*"<<endl<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Roll No="<<roll<<endl;
    }
  
};
class sports
{
 protected:
 int score1,score2;
 public:
 void getscore()
 {
     cout<<"*----------Input Score of student------*"<<endl<<endl;
   cout<<"Enter the team1 score=";
   cin>>score1;
   cout<<"Enter the team2 score=";
   cin>>score2;
 }
void showscore()
{
    cout<<"*----------Show Score------*"<<endl<<endl;
    cout<<"Team1 score = "<<score1<<endl;
    cout<<"Team2 score ="<<score2<<endl;
    if(score1>score2)
    {
        cout<<"Congrats!! Team 1 wins"<<endl;
    }
    else 
    {
    cout<<"Congrats!! Teams2 wins"<<endl;
    }

}
};
class marks:public student
{
    public:
    int m1,m2;
    void getmarks()
    {
        cout<<"*----------Input marks of student------*"<<endl<<endl;
        cout<<"Enter the marks m1=";
        cin>>m1;
        cout<<"Enter the marks m2=";
        cin>>m2;
    }
    void showmarks()
    {
        cout<<"*----------Show Marks of student------*"<<endl<<endl;
        cout<<"m1="<<m1<<endl;
        cout<<"m2="<<m2<<endl;
    }
};
class result:public sports,public marks
{
    public:
    int totalmarks;
    void gettotal()
    { 

    totalmarks =m1+m2;
    }
    void showtotal()
    {
    cout<<"total marks="<<totalmarks<<endl;
    
    }

};
int main()
{
  result m;
m.getdata();
m.showdata();
m.getmarks();
m.showmarks();
m.gettotal();
m.showtotal();
m.getscore();
m.showscore();
   
    
    return 0;
}