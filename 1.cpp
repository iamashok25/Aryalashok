#include <iostream>
using namespace std;

class Multiply
{
    double Number1, Number2;

public:
    void getData(void);
    void dataProduct(void);
};

inline void Multiply ::getData(void)
{
    cout << "Enter The First Number: ";
    cin >> Number1;
    cout << "Enter The Second Number: ";
    cin >> Number2;
}

inline void Multiply ::dataProduct(void)
{
    double mul;
    mul = Number1 * Number2;
    cout << "The Product or Multiple of two Number is: " << mul;
}

int main()
{
    Multiply integer;
    integer.getData();
    integer.dataProduct();

    return 0;
}