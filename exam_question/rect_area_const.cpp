#include<iostream>
using namespace std;
class area
{
    int length, bredth,tarea;
    public:
    area(int a, int b)
    {
        length = a;
        bredth = b;
    }
    void calcarea()
    {
       tarea = length * bredth;
    }
    void display()
    {
        cout<<"Area = "<<tarea;
    }
};
int main()
{
    area a1(5,6);
     a1.calcarea();
    a1.display();
    return 0;
    
}