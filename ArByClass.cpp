#include <iostream>
using namespace std;

// area and perimeter

class Rectangle {
    
public:
    int length;
    int breadth;

    void initialise (int l,int  b){
length = l;
breadth= b;
    }

    int area (){
        return length * breadth;
    }

    int perimeter (){
        int p ;
        p = 2 * (length + breadth);
        return p;

    }

};

int main (){
    // creating an object
    Rectangle r1;
    int l, b;
    cout << "Enter the length"<<endl;
    cin >> r1.length;

    cout << "Enter the breadth\n";
    cin >> r1.breadth;

    r1.initialise(l ,b);
    int a = r1.area ();
    int p = r1.perimeter ();

     cout << "The area is " << a << "\nThe perimeter is  "<< p << endl;

}