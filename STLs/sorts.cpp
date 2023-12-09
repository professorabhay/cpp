#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int number[6] = {3,2,6,4,7,9};

    cout << "unsorted value " << endl;
    for(int num : number){
        cout << num << " ";
    }

    sort(number, number+6);
    cout << "sorted value " << endl;
    for(int num : number){
        cout << num << " ";
    }


    return 0;
}
