// Veriadic Template Parameters

#include<iostream>
#include<string>

// veriadic -> ...

using namespace std;

template <typename T>
void func(T t){
    cout << "One Func " << t << endl;
}

template <typename T, typename... Args>
void func(T t, Args... args){
    cout << "Two func " <<  t << endl ;
    func(args...);
} // Quite similiar to recursion,  first value in t and other are args then agin in t and left in args, till the last value

int main(){

    string myName = "Abhay";
    func(1);
    func(1, 2, 3.4, 4.5, myName);

    return 0;
}

