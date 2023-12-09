#include<iostream>
#include<string>
using namespace std;

// Constructor reserve memory !!  A method which call as soon as object made.

class Phone{
    string _name = "" ;
    string _os = "" ;
    int _price = 0 ; 
    Phone(); //default constructor

public:
    // Phone(); //default constructor
    Phone(const string & name, const string & os, const int & price); // parameter constructor
    Phone(const Phone &); // copy constructor
    string getName(){return _os;} // getter 
    int getPrice();
    // destructor  - to free the memory reserved by constructor | it also called autometically but we can overload it 
    ~Phone(); // destructor
};

int Phone::getPrice(){
    printf("Value of getPrice is %p\n", this);    // this is the "this" self referencing pointer                                                                                                                            
    return _price;
}

Phone::Phone() : _name(), _os("Kitkat"), _price(){
    puts("Default constructor\n");
}

Phone::Phone(const string & name, const string & os, const int & price) : _name(name), _os(os), _price(price){
    puts("this is parameter constructor\n");
}

Phone::Phone(const Phone & values){
    puts("OVERWRITE copy constructor");
    _name = "vjhhvj " + values._name;
    _os = "A17 Bionic "+values._os;
    _price = values._price;
}

Phone::~Phone(){
    printf("Destructor called for %s\n", _name.c_str());
}

int main(){

    //default constructor
    // Phone samsungA1; 
    // cout << samsungA1.getName() << endl;

    // parameter constructor
    Phone iphone("13", "IOS", 122333);
    cout << iphone.getName() << endl;

    printf("Value of object is %p\n", &iphone);

        cout << iphone.getPrice() << endl;

    // copy constructor
    Phone iphone2 = iphone ;
    cout << iphone2.getName() << endl;

    

    return 0; 
}
