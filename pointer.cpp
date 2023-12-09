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

    references();

    return 0;
}

int references(){
    int score = 200;
    int *myp = &score;

    printf("Score is %d\n", score);
    printf("Score is %p\n", myp);

    int &another_score = score;
    another_score = 800;

    printf("Score is %d\n", score);
    printf("Score is %p\n", myp);

    return 0;

    // here it will also change the original score to 800 because another_score is the reference to the original one. THE BIG BOY GAME
}