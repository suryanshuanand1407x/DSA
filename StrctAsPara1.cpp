// Structure as a parameter and calling by value 
#include<iostream>
using namespace std;

struct Rectangle {
    int length = 10;
    int breadth = 15;
}r1;

int Area(struct Rectangle r){
    return r1.length*r1.breadth;
}
int main (){
    
    cout << r1.length <<endl;
    cout << r1.breadth <<endl;
    cout << Area(r1) <<endl;
}