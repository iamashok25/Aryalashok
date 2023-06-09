#include <iostream>
using namespace std;

class sample2; // forward declearation
class sample1
{
    int a;

public:
    void getData(int x)
    {
        a = x;
    }
    void showData()
    {
        cout << "value of a= " << a << endl;
    }

    friend void swap(sample1 &p, sample2 &q);
};

class sample2
{
    int b;

public:
    void getData(int y)
    {
        b = y;
    }
    void showData()
    {
        cout << "value of b=" << b << endl;
    }
    friend void swap(sample1 &p, sample2 &q);
};

void swap(sample1 &p, sample2 &q)
{
    int temp;
    temp = p.a;
    p.a = q.b;
    q.b = temp;
}

int main()
{
    sample1 s1;
    sample2 s2;
    s1.getData(200);
    s2.getData(500);
    cout << "Value before swapping:" << endl;
    s1.showData();
    s2.showData();
    cout << "Value after swapping:" << endl;
    swap(s1, s2);
    s1.showData();
    s2.showData();
    return 0;
}