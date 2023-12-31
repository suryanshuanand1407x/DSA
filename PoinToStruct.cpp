#include <stdio.h>
#include<iostream>
#include <stdlib.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;

};

int main(){
    struct Rectangle *p;
    p= new Rectangle; // The C++ new operator is used to allocate memory from the heap at runtime.

    p->length=13; // we need arrow operator to change values in dynamic allocation/to change or allot in heap
    p->breadth=12;

    cout << p->length<<endl;
    cout << p->breadth<<endl; 
}