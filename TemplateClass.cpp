#include <iostream>
using namespace std;

// add and substract using tempelate

class Arithmatic {
    private :
    int a ;
    int b;

    public :
     Arithmatic(int a, int b);
     int add ();
     int substract ();
};

// using scope resolution operator
//constructor
    Arithmatic::Arithmatic(int a, int b){
        this -> a = a;
        this -> b = b;
    }
// functions
 
int Arithmatic :: add ()
{
    return a+b;
}

int Arithmatic :: substract ()
{
    return a-b;
}



int main (){
    Arithmatic ar1(10,5);

    cout << "add " << ar1.add ()<<endl;
    cout << "substract " << ar1.substract ()<<endl;


}