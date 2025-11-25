// 6. Take two numbers and print the larger one. 
// 7. Take three numbers and print the largest. 
#include <iostream>
using namespace std;

int main(){
    int number1, number2, number3;
    cout << "Enter the number1, number2 and number3: " ;
    cin >> number1, number2, number3;

    // for two numbers
    if (number1 > number2){
        cout << "Number1 is larger." <<endl;
    }else{
        cout << "Number2 is larger." <<endl;
    }


    cout << "------------------------" << endl;


    // for three numbers
    if ((number1 > number2) && (number1 > number3)){
        cout << "Number1 is largest." <<endl;
    }
    else if ((number2 > number1) && (number2 > number3)){
        cout << "Number2 is largest." <<endl;
    }
    else{
        cout << "Number3 is largest." <<endl;
    }
    return 0;
}