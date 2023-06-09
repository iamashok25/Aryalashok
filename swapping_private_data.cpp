#include<iostream>
using namespace std;

class sample2;
class sample1
{
    int value1;
    public:
    void getdata(int a);
    {
        value1=a;
    }
            void showdata()
        
        {
            cout<<"value1 :"<<a;
            
        }
        friend void swap(sample1 x,sample2 y)

    };
    class sample2
    {
        int value2;
        public:
        void getdata(int a)
        {
            value=a;
        }
        void showdata()
        {
            cout<<"value"<<value1;
        }
        friend void swap(sample1 x, sample2 y)
    };
    void swap(sample1 x, sample2 y)
    {
        int temp;
        temp=x.value1;
        x.value1=y.value2;
        y.value1=temp;
    }
    int main()
    {
        sample1 s1;
        sample2 s2;
        s1.getdata(200);
        s2.getdata(500);
        cout<<"values before swap:";
        s1.showdata();
        s2.showdata();
        swap(s1,s2);
        cout<"Values after swap";
        s1.showdata();
        s2.showdata();
        return 0;
    }
    
   