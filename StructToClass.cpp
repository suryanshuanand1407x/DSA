//initialise, area, change length
// changing cpp structure to object
#include <iostream>
using namespace std;

class Rectangle {
    private:
    int length;
    int breadth;

public:
// to initialise we use call by address
// it is a constructor
Rectangle(int l, int b){
  length = l;
  breadth = b;
}
// to find area we use call by value
int area (){
    return length * breadth;
}
// to change length we again use call by address
void ChangeLength(int l){
    length = l;
}
};
int main (){
    
Rectangle r1(10,5);

// instead of initialise we call it a constructor
// therefore give the same name as class name to "void initialise" 
//r1.initialise(10,5);
r1.area();
r1.ChangeLength(6);

cout << r1.area()<< endl;
   

}