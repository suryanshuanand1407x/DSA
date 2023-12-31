#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
}r1;
//struct Rectangle r1={12,5};

int main (){
  //  struct Rectangle r1={10,5};
  // dot operator is used for accessing structures  
r1.length=13;
r1.breadth=14;
   cout << r1.length << endl;
   cout<< r1.breadth <<endl;
   cout<< sizeof(Rectangle)<<endl;
   cout<< "area of rectangle is " << r1.length*r1.breadth * sizeof(Rectangle)<<endl;
    
}