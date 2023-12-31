#include<stdlib.h>
#include <iostream>
using namespace std;
int main(){
int *p;
p= new int[5];
p[0]=1; p[1]=2; p[2]=3; p[3]=5; p[4]=6; 
for (int i=0; i<5;i++){
    cout << p[i]<<endl;

}
delete []p;
}