#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x = *y;
    *y = temp;
// we use pointer to point to the address of cell as without pointer the values swapped in x & y will not be changed for a & b
}

int main (){
    int a= 10;
    int b=20;
    swap(a,b);
    cout << a <<endl;
    cout << b <<endl;
}