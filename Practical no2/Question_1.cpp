/* Question.1: WAP to swap two private data members of classes named as class_1, class_2 using friend function.*/


#include<iostream>
using namespace std;
class class_2;
class class_1
{
    int  x1;
    public:
    void getdata(int a)
    {
    x1=a;
    }
    void showdata()
    {
        cout<<"value1="<<x1<<endl;
    }
    friend void swap(class_1 m,class_2 n);
};
class class_2
{
    int x2;
    public:
    void getdata(int b)
    {
x2=b;

    }
    void showdata()
    {
        cout<<"value2="<<x2<<endl;
    }
friend void swap(class_1 m, class_2 n);
};
void swap(class_1 m, class_2 n)
{
    int temp;
    temp=m.x1;
    m.x1=n.x2;
    n.x2=temp;
}
int main()
{
class_1 s1;
class_2 s2;
s1.getdata(200);
s2.getdata(500);
cout<<"VALUE BEFORE SWAPPING:"<<endl;
s1.showdata();
s2.showdata();
swap(s1,s2);
cout<<"Values after swapping"<<endl;
s2.showdata();
s1.showdata();
return 0;
}


