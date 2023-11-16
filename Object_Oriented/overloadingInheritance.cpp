// Part 4 - 

#include <iostream>
#include <string>

using namespace std;

class Man{
    string _name;
    int _age;
    Man(){}; // default constructor is disabled
protected:
    Man(const string & name, const int & age)
    : _name(name), _age(age){}
    void run(){puts("I can run");}
public:
    void sayName() const;
};

void Man::sayName() const {
    cout << "My name is: " << _name << " and age is: " << _age << endl ;
}

class Superman : public Man{
    bool flight;
public:
    Superman(string name) : Man(name, 26){}
    void run(){puts("I can run with the speed of light");}
};

class Spiderman : public Man{
    bool flight;
public:
    Spiderman(string name) : Man(name, 19){}
    void run(){puts("I can run at normal speed");}
};



int main (){

    Superman clark("Kent");
    clark.sayName();

    return 0;
}


// 7:46