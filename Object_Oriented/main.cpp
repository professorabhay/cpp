#include <iostream>
#include <string>
#include "user.cpp"
using namespace std;



int User::getSecret()const{
    return secret;
}

int main(){

    User sam;
    sam.name = "Sam Thomas";
    sam.classMessage();

    User abhay;
    abhay.name = "Abhay Porwal";
    abhay.classMessage();
    abhay.setSecret(33);               // setting
    cout << abhay.getSecret() << endl; // getting

    const User rock;
    cout << rock.getSecret () << endl ; // const can not access not const but not const can acess const [objects]

    User peter = sam; // copied all from the sam 
    cout << peter.getSecret() << endl ;

    return 0;
}