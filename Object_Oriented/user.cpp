#include<iostream>
#include<string>
using namespace std;


class User{
private:
    int secret = 22; // Not accessible directly, its a private member. But can by - getter setter
public:
    string name = "default";
    void classMessage(){cout << "Welcome to Method of class, " << name << endl;}
    // void classMessage();
    void setSecret(const int & newsecret){secret = newsecret;}  // setter
    // int getSecret()const {return  secret;} // getter
    int getSecret()const; // getter
};