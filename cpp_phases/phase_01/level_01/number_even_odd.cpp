// 2. Check if a number is even or odd. 

#include <iostream>
using namespace std;


// using function

int check_EvenOdd(){ // function start
    int number1;
    if ( number1 % 2 ==  0){
        cout << "Number is even." <<endl;
    }else{
        cout << "Number is odd." <<endl;
    }
}  // function end


int main(){

    // write in if else condtion

    int number1 = 22;
    if (number1 % 2 == 0){
        cout<< "Number is even." <<endl;
    }else{
        cout<< "Number is odd." <<endl;
    }

    // calling fucntion
    check_EvenOdd();
    return 0;
}
