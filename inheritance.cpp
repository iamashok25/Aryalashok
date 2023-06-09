//C++ program to demonstrate inheritance

#include<iostream>
using namespace std;

// base class
class B

{
    private:
    int x;
    protected:
    int y;
    public:
    int z;
    void getdata()
    {
        cout<<"Enter first number:";
        cin>>x;
        cout<<"Enter second number:";
        cin>>y;
        cout<<"Enter third number:";
        cin>>z;
    }
        void showdata()
        {
            cout<<"X="<<x<<endl;
            cout<<"Y="<<y<<endl;
            cout<<"Z="<<z<<endl;
        }
    };

    // derived class
    class D : public B
    {
        private:
        int k;
        public:
        void getk()
        {
            cout<<"Enter the value of k:";
            cin>>k;

        }
        void output()
        {
            cout<<"K="<<k<<endl;
            int s;
            s=y+z+k;
            cout<<"Sum of Y,Z & K="<<s;
        }
    };
    
    int main()
    {
        // Create object of the D class
        D d1;

        // Calling members of the base class
        d1.getdata();
        d1.showdata();
        
        // Calling member of the derived class
        d1.getk();
        d1.output();
        return 0;
    }
