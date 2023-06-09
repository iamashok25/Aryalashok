//Program to perform addition of time in hours and minutes format by passing object as 
//argument
#include<iostream>
using namespace std;
class time 
{
private:
int hours;
int minutes;
public:
void gettime(int h,int m)
{
hours=h;
minutes=m;
}
void display()
{
cout<<hours<<"Hours and"<<minutes<<"Minutes"<<endl;
}
void sum(time t1,time t2)
{
minutes = t1.minutes + t2.minutes;
hours = minutes/60;
minutes = minutes%60;
hours = hours + t1.hours + t2.hours;
}
};
int main()
{
time t1,t2,t3;
t1.gettime(2,45);
t2.gettime(3,30);
t3.sum(t1,t2);
cout<<"First time=";
t1.display();
cout<<"Second time=";
t2.display();
cout<<"Total time=";
t3.display();
return 0;
}
