#include <iostream>
#include <string>
using namespace std;

class One{
    public: 
        virtual void intro(){
            cout << "one\n";
        }
};

class Two: public One{
    public:
        void intro(){
            cout << "Two\n";
        }
};

class Three: public One{
    public:
        void intro(){
            cout << "Three\n";
        }
};

int main(){

    // One a;
    // Two b;
    // Three c;

    // a.intro();
    // b.intro();
    // c.intro();

    One *a;
    Two b;
    Three c;

    a = &b;
    a->intro();

    a = &c;
    a->intro();

    return 0;
}

// pure virtual functions are those functions that does not have any body within it.

