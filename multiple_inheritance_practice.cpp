#include<iostream>
using namespace std;
class animal
{
public:
void sound()
{
cout<<"Dogs bark"<<endl;
}
};
class rat
{
public:
void sound1()
{
cout<<"Cats meow"<<endl;
}
};
class call : public animal, public rat {};

int main()
{
call d;
d.sound();
d.sound1();

return 0;
}
