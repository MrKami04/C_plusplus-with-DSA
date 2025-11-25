// 5. Check if a given year is a leap year. 
#include <iostream>
using namespace std;

int main(){

    int year = 2000;
    
    if ((year%400 ==0) || (year%4 ==0 && year%100 !=0)){
        cout << "Year is a leap year" <<endl;
    }
    else{
        cout << "Year isn't a leap year" <<endl;
    }

    return 0;
}