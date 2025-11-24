// Phase 1 – Conditional Thinking (If–Else, Boolean Logic)
// Level 1: Simple Conditions
// 1. Take a number and print whether it’s positive, negative, or zero.

#include <iostream>
using namespace std;



// using function

int check_number( int number){ // function start
    
    if ( number > 0){
        cout << "Number is positive." <<endl;
    }
    else if  ( number < 0){
        cout << "Number is negative." <<endl;
    }
    else{
        cout << "Number is zero." <<endl;
    }
}  // function end



int main() {
// using if else condition
    int number;
    cout <<"Enter the number: ";
    cin >> number;

    if ( number > 0){
        cout << "Number is positive." <<endl;
    }else if  ( number < 0){
        cout << "Number is negative." <<endl;
    }else{
        cout << "Number is zero." <<endl;
    }



    // calling functtion
    check_number(number);
    return 0;
}

