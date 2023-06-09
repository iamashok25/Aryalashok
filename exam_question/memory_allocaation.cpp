#include<iostream>
using namespace std;
int main()
{
int* pointint; //declare an int pointer
float* pointfloat; //declare an float pointer

pointint = new int; //dynamically allocate memory
pointfloat = new float;

*pointint =45;    //assign memory to the memory
*pointfloat = 25.5;

cout<<*pointint<<endl;
cout<<*pointfloat<<endl;

delete pointint;  //deallocate the memory
delete pointfloat;
}