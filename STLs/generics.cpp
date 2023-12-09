#include <iostream>
using namespace std;

// Run Time Polymorphism

template <typename T> // T can take multiple data type input

T getBigger(T a, T b)
{
    return (a > b) ? a : b;
}


int main()
{
    cout << getBigger('a' , 'b') << endl;
    cout << getBigger(3.5 , 4.6) << endl; // any kind input but both can same.

    return 0;
}