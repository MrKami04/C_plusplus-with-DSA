// 8. Take a temperature value and print “Cold”, “Warm”, or “Hot” using range conditions. 

#include <iostream>
using namespace std;

int main(){

    int temperatur = 33;

    if (temperatur < 25){
        cout << "Cold" <<endl;
    }
    else if ((temperatur > 25) && (temperatur <= 40)){
        cout << "Warm" <<endl;
    }
    else{
        cout << "Hot" <<endl;
    }

    return 0;
}