#include<iostream>
using namespace std;
struct person
{
   char name[20];
    int age;
    float weight;
};
int main()
{
    person s;
    cout<<"Enter name:";
    cin.get(s.name,20);
    cout<<"Enter age:";
    cin>>s.age;
    cout<<"Enter weight:";
    cin>>s.weight;
    cout<<"Displaying Informations..."<<endl;
    cout<<"Name="<<s.name<<endl;
    cout<<"Age"<<s.age<<endl;
    cout<<"Weight="<<s.weight;
    return 0;
}