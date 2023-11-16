#include<iostream>
using namespace std;

int getTwo(){
    return 2;
}

void interesting(){
    puts("I am interesting");
}

int main(){

    int whatIgot = getTwo();
    cout<< whatIgot << endl ;

// function pointer
    void (*pointsToInteresting)() = interesting; // Pointing to memory location instead of running : 
    pointsToInteresting();
    // (*pointsToInteresting)();

    return 0;
}
