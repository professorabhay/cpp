#include <iostream>
using namespace std;

// Pre processor constant 

enum Msoffice: uint8_t {
    // BOLD,
    BOLD = 5,
    ITALICS,
    UNDERLINE,
    COSSED
};

int main(){
    int myAttributes = ITALICS;
    cout << myAttributes << endl;
    return 0;
}