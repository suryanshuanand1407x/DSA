#include <iostream>
using namespace std;
// by using & with the formal parameters we introduce call by reference
// seperate area is not created in the stack for this type of function
void swap (int &x, int &y){
    int temp;
    temp=x;
    x = y;
    y = temp;

}

int main (){
    int a = 10;
    int b = 20;
    swap(a,b);
    cout << a <<endl;
    cout << b <<endl;
}