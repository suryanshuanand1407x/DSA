#include <iostream>
using namespace std;
// area and perimeter will be functions
// Rectangle will be a structure

struct Rectangle{
    int length;
    int breadth;
}r1;

int area (struct Rectangle r1){
    return r1.length*r1.breadth;
}
// we do not need to write struct as it is a cpp program but we can still write it

int perimeter (Rectangle r1){
    int p;
    p = 2 * (r1.length + r1.breadth);
    return p;

}

int main (){

    int l, b;

    cout << "Enter the length"<<endl;
    cin >> r1.length;

    cout << "Enter the breadth\n";
    cin >> r1.breadth;

    int a = area (r1);
    int p = perimeter (r1);

    cout << "The area is " << a << "\nThe perimeter is  "<< p << endl;
}

