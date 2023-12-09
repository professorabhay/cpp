#include <iostream>
using namespace std ; // By default namespace
#include <string>

int main(){
    // std::cout<<"Hello World\n";
    // std::cout<<"Hello World" << std::endl;
    cout<< "Hello, Abhay! Hope your are doing well." << endl;

    int integer_array[4] ={1,2,3,4};
    cout << integer_array << endl;
    
    int number;
    // cout << "Enter your code: ";
    // cin >> number;
    // printf("Your ID is: %d \n", number+10+10*6+5+8);
    // return 0;
    int num = 0;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        // cout << i << endl;
    }

    for (int i : integer_array) {
        cout << i << endl;
    }
    
    // string myColor;
    // cout << "Enter Colour: ";
    // getline(cin, myColor); // getline is to took whole line as a input !
    // cout << "Hey, Your color is " << myColor << endl;

    // string firstName;  
    // string lastName; 
    // cout << "First Name: ";
    // getline(cin, firstName);
    // cout << "Last Name: ";
    // getline(cin, lastName);

    // cout << "Hey! " <<firstName<< " " <<lastName<<endl;

    int arr[4] = {1,2,3,4};
    int *ap = arr; // pointing to 0 index
    ap++; // increasing pointer from 0 to 1
    *ap = 209; // it change the index 1 value 
    cout<< arr[1]<<endl;

}

