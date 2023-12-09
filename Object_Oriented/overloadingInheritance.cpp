// Part 4 - 

#include <iostream>
#include <string>

using namespace std;

class Money{
    public: 
        void gotMoney(){puts("5k m oney");}
};

class Man{
    string _name;
    int _age;
    Man(){}; // default constructor is disabled

    friend class Superman;

protected:
    Man(const string & name, const int & age)
    : _name(name), _age(age){}
    void run(){puts("I can run");}
    int getAge(){return _age;} // getting
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
    void run(){printf("I can run with the speed of light and Age: %d", _age);}
    // Not it can acceess age but spiderman can't
};

class Spiderman : public Man, public Money{
    bool flight;
public:
    Spiderman(string name) : Man(name, 19){}
    void run(){puts("I can run at normal speed");}
};



int main (){

    Superman clark("Kent");
    clark.sayName();

    Spiderman peter("peter");
    peter.sayName();
    peter.run();
    peter.gotMoney();

    return 0;
}


// 7:46

// friend keyword -> 