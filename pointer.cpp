// Pointer points the the location of memory of any variables 

#include<iostream>
using namespace std;

int main(){
    int life = 4;
    cout << life;
    life = 5;
    cout << life;

    int *myp;
    myp = &life; //pointing to the memory of the variable life
    printf("%p", myp);
    int valuePointer;
    valuePointer = *myp;
    printf("%d", valuePointer);


    return 0;
}