// 1. Take three sides and check if they form a valid triangle.
#include <iostream>
using namespace std;

int main (){

    float side_1, side_2, side_3;

    cout << "Enter side one:";
    cin >> side_1;
    cout << "Enter side two:";
    cin >> side_2;
    cout << "Enter side three:";
    cin >> side_3;

    if ((side_1 + side_2 > side_3) && (side_1 + side_3 > side_2)){
        if((side_2 + side_3 > side_1)){
            cout << "Yes, valid triangle." <<endl;
        }
        else{
            cout << "No, it's not valid." <<endl;
        }
    }
    else{
            cout << "No, it's not valid." <<endl;
        }
    
    return 0;
}