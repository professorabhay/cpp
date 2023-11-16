// It's a function that call itself but with exit strategy.

#include <iostream>
int factorial(int n); // telling to compiler that their is something exist 
using namespace std;

int main(){
    // Factorial: 5 - 5*4*3*2*1 = 120
    int n ;
    cout << "Enter +ve Value: " ;
    cin >> n ;
    cout << "Your result is: " << factorial(n) << endl ; 
    return 0;
}

int factorial(int n){
    if (n > 1){
        return n * factorial ( n-1);
    } else return 1; 
}