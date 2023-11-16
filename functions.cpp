#include<iostream>
// #include "header.h"
using namespace std;

// void lifeUp(int *life){
//     ++(*life);
//     // life++;
//     cout << *life << endl ;
// }

void lifeUp(int &life){
    ++(life);
    // life++;
    // cout << life << endl ;
}

// Generic 

template<typename T>

T addme(T a, T b){
    return a + b;
} 
// Now any type of data type can fits here [not like 2 func for int and float]

int main(){
    // int life = 3; // call by value | value not change
    // lifeUp(life);
    // cout << life << endl;

    // int life = 3; // call by reference | value change
    // lifeUp(&life);
    // cout << life << endl;

    int life = 3; // call by reference | value change
    lifeUp(life);
    // cout << life << endl;

    int v1 = 5;
    int v2 = 5;
    float v3 = 1.5;
    float v4 = 1.5;

    cout << addme(v1, v2) << endl;
    cout << addme(v3, v4) << endl;

    return 0;
}