#include<iostream>
using namespace std;
class intrestamnt
{
    int intrest;
    int p_amount;
    int time;
    int rate= 8;
    public:
    void getinfo()
    {
        cout<<"Enter the Principal amount=";
        cin>>p_amount;
        cout<<"Enter the time taken=";
        cin>>time;
    }
   void showinfo()
    {
        intrest = p_amount*time*rate /100;
        cout<<"Intrest="<<intrest<<endl;
    }
    };
    int main()
    {
        intrestamnt p;
        cout<<"Enter the information for first customer:"<<endl;
        p.getinfo();
        p.showinfo();
         cout<<"Enter the information for Second customer:"<<endl;
        p.getinfo();
        p.showinfo();
         cout<<"Enter the information for third customer:"<<endl;
        p.getinfo();
        p.showinfo();
        
        return 0;
    }
