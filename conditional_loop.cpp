#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 10;
    if (a == b)
    {
        // cout << true<<endl;
    }
    else if (a > b)
    {
        puts("Greater");
    }
    else if (a < b)
    {
        puts("Smaller");
    }
    else {
        puts("false");
    }

    // Tenary operator -> condition ? trueblock : falseblock
    // a==10 ? cout<<true : cout << false << endl;


    // int rating = 5;
    // switch (rating){
    //     case 1: 
    //         puts("Rating 1");
    //         break;
    //     case 3: 
    //         puts("Rating 3");
    //         break;
    //     case 5: 
    //         puts("Rating 5");
    //         break;
    //     default: 
    //         puts("ERROR 404");
    //         break;
    // }
    
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int i = 0;

    // while (i < 10)
    // {
    //     if (i == 7)
    //     {
    //         cout << "break" << endl;
    //         break;
    //     } else if (i ==2){
    //         cout << "continue" << endl;
    //         i++;
    //         continue;
    //     }
        
    //     cout << arr[i] << endl;
    //     i++;
    // }

    // do
    // {
    //     /* code */
    //     cout << "hai" << endl;
    //     i++;
    // } while (i == 2);

    
    
    
    
    
    return 0;
}
