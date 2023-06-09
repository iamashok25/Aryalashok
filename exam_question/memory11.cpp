#include<iostream>
using namespace std;
int main()
{
    int* pointint;  //declare an int pointer
    float* pointfloat; //declare an float pointer

pointint = new int; //dynamically allocate memory
pointfloat = new float;

*pointint = 50;  // assign value to the memory 
*pointfloat =25.4;

cout<<*pointint<<endl;
cout<<*pointfloat<<endl;

delete pointint;  //deallocating memory
delete pointfloat;
return 0;
}