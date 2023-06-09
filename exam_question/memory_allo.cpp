#include<iostream>
using namespace std;
int main()
{
    int* pointerint;    //declare an int pointer
    float* pointerfloat;  //declare an float  pointer

    pointerint = new int;   //allocating memory dynamically
    pointerfloat = new float;

    *pointerint = 45;    //assign value to the memory
    *pointerfloat=25.3;

    cout<<*pointerint<<endl;  
    cout<<*pointerfloat;

    delete pointerint;    //deallocate the memory
    delete pointerfloat;

}