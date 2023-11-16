#include<iostream>
#include<string>

#define END return 0
#define ENDMESSAGE cout << "Programs ends here\n"
#define LCOINT int32_t

#define console_log(a)  cout << a << endl;

using namespace std;

int main(){

    LCOINT a = 4;
    cout << a << endl;

    int score = 400;
    // cout << score << endl;
    console_log(score);

    ENDMESSAGE;
    END;
}