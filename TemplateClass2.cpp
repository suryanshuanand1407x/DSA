#include <iostream>
using namespace std;

// add and substract using tempelate
template <class T> 
class Arithmatic {
    private :
    T a ;
    T b;

    public :
     Arithmatic(T a, T b);
     T add ();
     T substract ();
};

// using scope resolution operator
//constructor
    template <class T> 
    Arithmatic<T>::Arithmatic(T a, T b){
        this -> a = a;
        this -> b = b;
    }
// functions

template <class T> 
T Arithmatic <T> :: add ()
{
    return a+b;
}

template <class T> 
T Arithmatic <T>:: substract ()
{
    return a-b;
}



int main (){
    // we can determine the type of data type we want
    Arithmatic <float> ar1(10.3,5);

    cout << "add " << ar1.add ()<<endl;
    cout << "substract " << ar1.substract ()<<endl;


}