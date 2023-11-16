#include <iostream>
using namespace std;

int lifeUp(){
    static int life = 3; // static for global presence 
    return ++life;
}

int main(){
    // int life = 3;
    // cout << "Your Life is: " << life << endl ;

    // life = lifeUp();
    // printf("Your Updated Life is: %d\n", life);

    // life = lifeUp();
    // printf("Your Updated Life is: %d\n", life);

    // puts("Tell me the error in the code!");


    // Bit Byte 

    // unsigned int x = 6;
    // unsigned int y = 7;

    // unsigned int z = x & y ; // And
    // unsigned int z1 = x | y ; // or
    // unsigned int z2 = ~y ;  // not [!y]
    // unsigned int z3 = y << 1; // shift left
    // unsigned int z4 = y >> 1; // shift right 
    // unsigned int z5 = x ^ y ; // XOR

    // cout << z << endl ;
    // cout << z1 << endl ;
    // cout << z2 << endl ;
    // cout << z3 << endl ;
    // cout << z4 << endl ;
    // cout << z5 << endl ;

    // Memory Leaks

    int * myp;

    try{
        myp = new int [100];
        cout << "Memory space allocated\n";
    }
    catch(...){
        cout<<"failed in allocation\n";
    }
    // with new then definetly use delete 
    delete [] myp;
    
    return 0;
}



