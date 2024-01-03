//Structure as a parameter using call by reference
#include <iostream>
using namespace std;
struct Rectangle{
    int length, breadth;
}r2;

int Area (struct Rectangle &r1){
return r1.length * r1.breadth;
}


int main(){
struct Rectangle r2= {10,5};

cout << Area(r2) <<endl;

}