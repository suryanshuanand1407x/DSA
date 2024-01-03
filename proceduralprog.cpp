#include <iostream>
using namespace std;
// to find out area and perimeter of a rectangle

//function for area
// it will be of call by value

int area (int length, int breadth){
    return length * breadth;
}

int perimeter (int length, int breadth){
    int p;
    p = 2 * (length+breadth);
    return p;
}

int main (){
  int length=0,breadth=0;
  cout << "enter length\n";
  cin >> length;
  cout << "enter breadth\n";
  cin>> breadth;

  int a = area(length, breadth);
  int peri = perimeter (length, breadth);

  cout << "area is " << a<< endl;
  cout << "perimeter is " << peri<< endl;

}
