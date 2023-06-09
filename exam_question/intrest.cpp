#include<iostream>
using namespace std;
class intrestamnt
{
    int intrest;
    int p_amount;
    int time;
    int rate= 8;
    public:
    void getdata()
    {
        cout<<"Enter the Principal amount=";
        cin>>p_amount;
        cout<<"Enter the time taken=";
        cin>>time;
    }
   void showdata()
    {
        intrest = p_amount*time*rate /100;
        cout<<"Intrest="<<intrest<<endl;
    }
    };
    int main()
    {
        intrestamnt p1,p2,p3;
        cout<<"Enter Details for first person"<<endl;
        p1.getdata();
        p1.showdata();
         cout<<"Enter Details for Second person"<<endl;
        p2.getdata();
        p2.showdata();
         cout<<"Enter Details for Third person"<<endl;
        p3.getdata();
        p3.showdata();
        return 0;
    }
        /*int i,n;
cout<<"Enter the number of customer: ";
cin>>n;
        for (i=1; i<=n;i++)
        {
            p[i].getinfo();
        }
        for (i=1; i<=n;i++)
        {
            p[i].showinfo();
        }
        
        return 0;
    }*/
    
