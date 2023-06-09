#include<iostream>
using namespace std;
class student
{
    int roll;
    char name;
    public:
    student(int r, char n)
    {
        
        roll = r;
        name = n;
    }
        
void showdata()
{

cout<<"Roll no="<<roll<<endl;
cout<<"Name="<<name<<endl;
    }
  
 
};
int main()
{
student s(6, 'b');
s.showdata();
return 0;
}