// Fastest and Default 
// Stack has preferred size while heap can increase

#include <iostream>
using namespace std;

struct User{
    const int id;
    int age;

    User(): id(001), age(22){};
    
};

int main(){
    // stack
    int score = 100;
    User mike;

    //heap
    int* heap_score = new int ;
    *heap_score = 200;

    User* nike = new User();
    

    return 0; 
}


