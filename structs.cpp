#include <iostream>
using namespace std;

struct User{
    const int uId;
    const char *name;
    const char *email;
    int course_count;
};

int main(){
    User a = {002, "a", "a@mail.com", 4};
    cout << a.uId << endl << a.name << endl ;

    a.course_count = 5;
    cout << a.course_count << endl;
    

}