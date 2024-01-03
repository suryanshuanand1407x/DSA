#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

// initialise -> area -> change length

// for initialising we will need tp use call by address

void initialise(struct Rectangle *r, int l,int b){
    r ->length = l;
    r ->breadth = b;
}

// for finding area we just need one return type and thus we use call by value
int area (struct Rectangle r){
    return r.length * r. breadth;
}

void ChangeLength (struct Rectangle *r, int l){
    r->length = l ;
}

int main (){
    struct Rectangle r;
    initialise (&r, 10, 5);
    area (r);
    ChangeLength (&r,20);

// we cannot print initialise and changeLength as they are not returning any values. 
// They are just there to keep the program running and updated
// I think only call by value can be printed
   
    cout << area(r) << "\n";
    
}
