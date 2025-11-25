// 3. Check if a number is divisible by 5. 
// 4. Check if a number is divisible by both 3 and 5. 

#include <iostream>
using namespace std;

int main(){
    int number = 10;
    if (number % 5 == 0){
        cout << "Number is divisible by 5." <<endl;
    }else{
        cout << "Number is not divisible by 5." <<endl;
    }


    int number1 = 15;
    if (number % 5 == 0){
        cout << "Number is divisible by both 3 and 5." <<endl;
    }else{
        cout << "Number isn't divisible by both 3 and 5." <<endl;
    }

    return 0;
}