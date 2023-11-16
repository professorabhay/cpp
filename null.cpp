#include<iostream>
// #define NULL 0  // its a macro
using namespace std;

void printval(int a){
    printf("%d\n", a);
}

void printval(double a){
    printf("%f\n", a);
}

void printval(int *a){
    printf("%p\n", a);
}

int main(){

    printval(5);
    printval(5.3);
    // printval(NULL); 
    printval(nullptr);
    
    return 0;
}