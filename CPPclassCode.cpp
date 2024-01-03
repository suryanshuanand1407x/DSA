// full cpp code
#include <iostream>
using namespace std;
class Rectangle {
    private :

    int length;
    int breadth;

    public :

    // creating DEFAULT Constructor

    Rectangle (){
        length = 0;
        breadth = 0;
    }

    //creating PARAMETERISED Constructor

    Rectangle( int l, int b){
        length = l;
        breadth = b;
    }

    // Area and Perimeter are the actual methods which we want
     int area (){
        return length * breadth;
    }

    int perimeter (){
        int p ;
        p = 2 * (length + breadth);
        return p;

    }
    
    // setLength and setBreadth are called MUTATOR Functions which are used for writing the properties length and breadth

    void setLength (int l){
        length = l;
    }

    void setBreadth (int b){
        breadth = b;
    }

    // getLength and getBreadth are called ACCESOR Functions which are used for reading the properties length and breadth
    int getLength (){
        return length;
    }

    int getBreadth (){
        return breadth;
    }

    //destructor for dynamic memmory allocation

    ~Rectangle(){
        cout << "Destructor\n";
    }

};

int main (){

    Rectangle r1(10,5);

    cout <<"area "<< r1.area()<<endl;
    cout << "perimeter "<<r1.perimeter()<<endl;

}