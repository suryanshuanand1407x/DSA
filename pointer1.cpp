#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
    
}r1{10,15};


int main (){
struct Rectangle *p=&r1;
r1.length=20;
(*p).length=25; // pointer to a structure
cout<<(*p).length<<endl;
cout<<(*p).breadth<<endl;
}