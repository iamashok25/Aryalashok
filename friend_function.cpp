
#include <iostream>
using namespace std;
class area
{
    float a,b;
    public:
    void getdata()
    {
        cout<<"Enter a=";
        cin>>a;
        cout<<"Enter b=";
        cin>>b;
    }
    friend float showarea(area p);
};
float showarea(area p)
{
    float temp;
    temp = (p.a + p.b)/2.0;
    return temp;
}

int main() {
    area r;
    float a;
    r.getdata();
    a=showarea(r);
    cout<<"Area="<<a;

    return 0;
}