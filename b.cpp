// Strongly typed example 
// data type of variable should be defined !

#include <iostream>
#include <string>
using namespace std;

string api_call(){
    return "got some data from web\n";
}

int anotherAPICall(){
    return 5;
}

int main(){
    // string response =  api_call();
    auto response = api_call(); // Use auto when don't know what kind of data is coming !
    auto res = anotherAPICall();

    cout << "API Call Value: " << response << endl;
    cout << "API Call Value: " << res << endl;

    if (typeid(response) == typeid(string)){
        puts("Type of both ID matches\n");
    }
    // if (typeid(res) == typeid(int)){
    //     puts("Type of both ID matches\n");
    // }    
    return 0;
}