// 2. If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene. 
#include <iostream>
using namespace std;

int main (){

    float side1, side2, side3;

    cout << "Enter side one:";
    cin >> side1;
    cout << "Enter side two:";
    cin >> side2;
    cout << "Enter side three:";
    cin >> side3;

    // check valid triangle
    if ((side1 + side2 > side3) && (side1 + side3 > side2)){
        if((side2 + side3 > side1)){
            cout << "Yes, valid triangle." <<endl;

            // # Equilateral Triangle: All three sides are equal. Every angle is also the same.
            if (side1 == side2 == side3){
                cout << "This is Equilateral Triangle." <<endl;
            }

            // # Isosceles Triangle: Two sides are equal and the third side is different.
            else if ((side1 == side2) || (side1 == side3) || (side2 == side3)){
                cout << "This is Isosceles Triangle." <<endl;
            }

            // # Scalene Triangle: All three sides are different from each other.No sides and angles are equal.
            else{
                cout << "This is Scalene Triangle." <<endl;
            }

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